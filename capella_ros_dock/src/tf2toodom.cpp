#include "capella_ros_dock/tf2toodom.hpp"
#include "rclcpp_components/register_node_macro.hpp"

using namespace std::chrono_literals;

namespace capella_ros_dock
{
TF2ToOdom::TF2ToOdom(const rclcpp::NodeOptions & options)
	: rclcpp::Node("tf2_to_odom", options)
{
        RCLCPP_INFO(this->get_logger(), "tf2toodom node start.");
        tf_time_last_ = this->get_clock()->now().seconds(); 
        odom_dummy_ = nav_msgs::msg::Odometry();
        tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        tf_stamed_last_ = geometry_msgs::msg::TransformStamped();
        tf_stamed_current_ = geometry_msgs::msg::TransformStamped();
        odom_dummy_timer_ = this->create_wall_timer(50ms, std::bind(&TF2ToOdom::odom_dummy_timer_callback, this));
        odom_dummy_pub_ = this->create_publisher<nav_msgs::msg::Odometry>("odom_for_dock_moving", rclcpp::QoS(rclcpp::KeepLast(10)).best_effort());
}

bool TF2ToOdom::getTransform(
	const std::string & refFrame, const std::string & childFrame,
	geometry_msgs::msg::TransformStamped & transform)
{
	std::string errMsg;

	if (!tf_buffer_->canTransform(
		    refFrame, childFrame, tf2::TimePointZero,
		    tf2::durationFromSec(0.10), &errMsg))
	{
		RCLCPP_ERROR_STREAM(this->get_logger(), "Unable to get pose from TF: " << errMsg);
		return false;
	} else {
		try {
			transform = tf_buffer_->lookupTransform(
				refFrame, childFrame, tf2::TimePointZero, tf2::durationFromSec(
					0.10));
		} catch (const tf2::TransformException & e) {
			RCLCPP_ERROR_STREAM(
				this->get_logger(),
				"Error in lookupTransform of " << childFrame << " in " << refFrame << " : " << e.what());
			return false;
		}
	}
	return true;
}
        void TF2ToOdom::odom_dummy_timer_callback()
        {
                if(getTransform(std::string("map"), std::string("base_link"), tf_stamed_current_))
                {
                        tf_time_current_ = this->get_clock()->now().seconds();
                        auto delta_time = tf_time_current_ - tf_time_last_;
                        RCLCPP_DEBUG(this->get_logger(), "delta_time: %f", delta_time);

                        auto robot_x_last = tf_stamed_last_.transform.translation.x;
                        auto robot_y_last = tf_stamed_last_.transform.translation.y;
                        auto robot_yaw_last = tf2::getYaw(tf_stamed_last_.transform.rotation);

                        auto robot_x_current = tf_stamed_current_.transform.translation.x;
                        auto robot_y_current = tf_stamed_current_.transform.translation.y;
                        auto robot_yaw_current = tf2::getYaw(tf_stamed_current_.transform.rotation);

                        odom_dummy_.header = tf_stamed_current_.header;
                        odom_dummy_.child_frame_id = std::string("base_link");
                        odom_dummy_.pose.pose.position.x = tf_stamed_current_.transform.translation.x;
                        odom_dummy_.pose.pose.position.y = tf_stamed_current_.transform.translation.y;
                        odom_dummy_.pose.pose.position.z = tf_stamed_current_.transform.translation.z;
                        odom_dummy_.pose.pose.orientation = tf_stamed_current_.transform.rotation;
                        double moving_orientation = std::atan2(robot_y_current - robot_y_last, robot_x_current - robot_x_last);
                        int sign = angles::shortest_angular_distance(moving_orientation, robot_x_current) < M_PI / 2.0 ? 1 : -1;
                        odom_dummy_.twist.twist.linear.x = (std::hypot(robot_x_current - robot_x_last, robot_y_current - robot_y_last)) / delta_time * sign;
                        odom_dummy_.twist.twist.angular.z = angles::shortest_angular_distance(robot_yaw_last, robot_yaw_current) / delta_time;

                        odom_dummy_pub_->publish(odom_dummy_);

                        tf_stamed_last_ = tf_stamed_current_;
                        tf_time_last_ = tf_time_current_;
                }

        }

} // end of namespace

RCLCPP_COMPONENTS_REGISTER_NODE(capella_ros_dock::TF2ToOdom)