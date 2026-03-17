// main.cpp
#include "calculator.hpp"
#include <iostream>

int main() {
    Calculator calculator;
    std::cout << "2 + 2 = " << calculator.add(2, 2) << std::endl;
    std::cout << "5 - 3 = " << calculator.subtract(5, 3) << std::endl;
    std::cout << "4 * 5 = " << calculator.multiply(4, 5) << std::endl;
    std::cout << "10 / 2 = " << calculator.divide(10, 2) << std::endl;
    return 0;
}