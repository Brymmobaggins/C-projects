// Write a program to find the factorial value of any number entered through the keyboard

#include <iostream> 
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter any number : ";
    cin >> n;

    while (n >= 1)
    {
        fact *= n;
        n--;
    }

    cout << "Factorial :" << fact;

    return 0;
}