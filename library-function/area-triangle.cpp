// Write a program to compute area of triangle. Sides are input by user.
// Area = sqrt(s*(s-a)*(s-b)*(s-c))
// where s=(a+b+c)/2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, s, Area;
    cout << " Enter value of three sides: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2;

    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << " Area of triangle: " << Area;  

    return 0;
}