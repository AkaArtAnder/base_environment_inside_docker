#include <iostream>

#include "math_func/includes/math.hpp"

int main(int, char**) {
    std::string str = "Hello world!\n";
    std::cout << str;
    std::cout << mathFunc::sum(-32, 32) << '\n';
    std::cout << mathFunc::get_value_str(std::string("value")) << '\n';
}