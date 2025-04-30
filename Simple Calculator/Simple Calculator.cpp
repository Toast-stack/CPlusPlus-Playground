// Simple Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>  // Include the cmath library for advanced math operations

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /, ^, %, r for square root, p for percentage): ";
    std::cin >> operation;

    // If the operation requires only one number (like square root), we adjust input
    if (operation != 'r') {
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    // Using switch-case to handle different math operations
    switch (operation) {
    case '+':
        std::cout << "Result: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Result: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "Result: " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0)
            std::cout << "Result: " << num1 / num2 << std::endl;
        else
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        break;
    case '^':
        std::cout << "Result: " << pow(num1, num2) << std::endl;
        break;
    case '%':
        std::cout << "Result: " << fmod(num1, num2) << std::endl;
        break;
    case 'r':
        std::cout << "Result: " << sqrt(num1) << std::endl;
        break;
    case 'p':
        std::cout << "Result: " << (num1 * num2) / 100 << "%" << std::endl;
        break;
    default:
        std::cout << "Invalid operator. Please use +, -, *, /, ^, %, r, or p." << std::endl;
    }

    return 0;
}