#include <iostream>
#include "../include/add.h"

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    int sum;

    printf("Input a number: ");
    cin >> firstNumber;

    printf("Input another number: ");
    cin >> secondNumber;

    sum = add(firstNumber, secondNumber);

    printf("The sum of %d and %d is %d", firstNumber, secondNumber, sum);

    printf("\nOdd numbers from 1 to 9: ");

    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) continue;
        if (i == 10) break;
        
        printf("%d", i);
    }

    return 0;
}