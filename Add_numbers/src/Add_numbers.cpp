//============================================================================
// Name        : Add_numbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double x, double y) : num1(x), num2(y) {}

    double add() {
        return num1 + num2;
    }
};

int main() {
    double x, y;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> x;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> y;

    // Create a Calculator object with the input numbers
    Calculator calc(x, y);

    // Calculate and display the sum
    std::cout << "The sum is: " << calc.add() << std::endl;

    return 0;
}

