#include <iostream>

using namespace std;

// int main()
// {

//     cout << "\n Hello World";

//     return 0;
// }
// program that accept two numbers an print the sum

int main()
{

    float firstNumber, secondNumber, total;

    cout << "\n Enter your first value : ";
    cin >> firstNumber;

    cout << "\n Enter your second value : ";
    cin >> secondNumber;

    total = firstNumber + secondNumber;
    cout << "\n The sum of the both values : " << total;

    return 0;
}