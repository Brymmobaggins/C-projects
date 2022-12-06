#include <iostream>
using namespace std;

int main()
{

    int firstValue, secondValue;
    cout << " Enter two numbers ";
    cin >> firstValue >> secondValue;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "\n After swapping, the number are ";
    cout << firstValue <<" "<< secondValue;

    return 0;
}
