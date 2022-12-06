// Any year is input by the user. Write a program to determine whether the year is a leap year or not

#include <iostream>

using namespace std;

int main()
{
    int Year;
    cout << " Enter the year: ";
    cin >> Year;

    if (Year % 4 == 0 || year % 100 != 0) && (year % 4 == 0)
        cout << " This is a leap year ";
    else
        cout << " This is not leap year " ;

    return 0;
}