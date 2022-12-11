#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    int sum;

    cout << "Input a number: ";
    cin >> firstNumber;

    cout << "Input another number: ";
    cin >> secondNumber;

    sum = firstNumber + secondNumber;

    std::ostringstream myString;
    myString << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum;

    cout << myString.str() << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    return 0;
}