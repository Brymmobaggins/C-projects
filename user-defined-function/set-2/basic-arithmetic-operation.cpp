// Write a program that lets the user perform arithmetic operations on two numbers. Your program must be menu driven, allowing the user to select the operation (+, -, *, or /) and input the numbers. Furthermore, your program must consist of following functions:
// 1. Function showChoice: This function shows the options to the user and explains how to enter data.
// 2. Function add: This function accepts two number as arguments and returns sum.
// 3. Function subtract: This function accepts two number as arguments and returns their difference.
// 4. Function multiply: This function accepts two number as arguments and returns product.
// 5. Function divide: This function accepts two number as arguments and returns quotient

#include <iostream>
// #include <ctc
using namespace std;

// function to show the options to the user bad explains how to enter the data
void showChoice()
{

    cout << "MENU" << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "5: Exit" << endl;
    cout << "Enter your choice: " << endl;
}

// function to return sum
float add(float a, float b)
{
    return a + b;
}
// function to return difference
float subtract(float a, float b)
{

    return a - b;
}
// function  to return product
float multiply(float a, float b)
{

    return a * b;
}
// function to return quotient
float divide(float a, float b)
{

    return a / b;
}

// The main fuction
int main()
{
    float x, y;
    int choice;
    do
    {
        showChoice(); // calling the showChoice functon inside the main function
        cin >> choice;
        switch ((choice))

        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Sum is " << add(x, y) << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Difference is " << subtract(x, y) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Product " << multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Quotient " << divide(x, y) << endl;
            break;
        case 5:
            break;

        default:
            cout << " Invalid Input" << endl;
        };
    } while (choice != 5);
    return 0;
}
