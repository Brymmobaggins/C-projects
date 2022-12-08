// Write a program to enter the numbers till the user wants and at the end it should display the maximum and minimum number entered.
#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, min = 32767;
    char choice;

    do
    {
        cout << "Enter number : ";
        cin >> n;

        if (n > max)
            max = n;
        if (n < min)
            min = n;

        cout << "Do you want to Continue(y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Maximum Number :" << max << "\nMinimum Number :" << min;

    return 0;
}
