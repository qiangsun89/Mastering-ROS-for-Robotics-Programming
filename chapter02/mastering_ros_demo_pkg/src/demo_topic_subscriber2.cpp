#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>

void number_callback(const std_msgs::Int32::ConstPtr& msg){
    ROS_INFO("Recived[%d]",msg->data);
}

int main(int argc, char** argv){
    ros::init(argc, argv,"demo_topic_subscriber2");
    ros::NodeHandle node_obj;
    ros::Subscriber number_subscriber = node_obj.subscribe("/numbers",10,number_callback);
    ros::spin();
    return 0;
}