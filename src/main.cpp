#include <iostream>
#include <string>
#include "../include/add.h"

int main()
{
    int firstNumber;
    int secondNumber;
    int sum;

    std::cout << "Input a number: " << std::endl;
    std::cin >> firstNumber;

    while (firstNumber == static_cast<float>(firstNumber)) {
        std::cout << "Please enter a valid number: " << std::endl;
        std::cin >> firstNumber;

        if (firstNumber == static_cast<int>(firstNumber)) break;
    }

    std::cout << "Input another number: ";
    std::cin >> secondNumber;

    sum = add(firstNumber, secondNumber);

    std::cout << "The sum of " + std::to_string(firstNumber) + " and " + std::to_string(secondNumber) + " is " + std::to_string(sum) + "." << std::endl;

    std::cout << "Odd numbers from 1 to 9: " << std::endl;

    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) continue;
        if (i == 10) break;
        
        std::cout << i << std::endl;
    }

    return 0;
}