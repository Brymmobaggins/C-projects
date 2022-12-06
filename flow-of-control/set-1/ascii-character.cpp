// Any character is entered by the user; write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.

//  The following table shows the range of ASCII values for various characters.
// Characters	ASCII Values
// A – Z	65 – 90
// a – z	97 – 122
// 0 – 9	48 – 57
// special symbols	0 - 47, 58 - 64, 91 - 96, 123 – 127

#include <iostream>
using namespace std;

int main()
{

    char x;
    cout << " Enter any character: ";
    cin >> x;

    if (x >= 65 && x <= 90)
        cout << " Character is a capital letter ";
    else if (x >= 97 && x <= 122)
        cout << " character is lower letter ";
    else if (x >= 48 && x <= 57)
        cout << " character is a digit ";
    else if ((x >= 0 && x <= 47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96) || (x >= 123 && x <= 127))
        cout << " character is special symbol " << endl;

    return 0;
}