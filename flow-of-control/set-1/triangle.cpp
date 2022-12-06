// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include <iostream>

using namespace std;

int main()
{

    int firstAngle, secondAngle, thirdAngle;
    cout << " Enter first angle: ";
    cin >> firstAngle;

    cout << " Enter second Angle: ";
    cin >> secondAngle;

    cout << " Enter third angle: ";
    cin >> thirdAngle;

    if (firstAngle + secondAngle + thirdAngle == 180)
        cout << " Triangle is valid ";
    else
        cout << " Triangle is invalid ";

    return 0;
}