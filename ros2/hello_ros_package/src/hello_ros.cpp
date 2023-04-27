#include "hello.h"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[]){
    hello();
    rclcpp::init(argc, argv);
      auto node = rclcpp::Node::make_shared("minimal_action_client");
    RCLCPP_INFO(node->get_logger(), "Sending goal");
    rclcpp::shutdown();
    return 0;
}
