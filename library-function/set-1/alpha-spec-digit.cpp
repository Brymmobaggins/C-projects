// Write a program to check character entered is alphabet, digit or special character using library functions

#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char x;
    cout << " Enter any Character :";
    cin >> x;

    if (isalpha(x))
        cout << "Your input is an Alphabet";
    else if (isdigit(x))
        cout << " Your input is Digit character ";
    else
        cout << " Your input is a special character ";

    return 0;
}