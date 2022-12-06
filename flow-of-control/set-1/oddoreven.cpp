
// Any integer is input by the user. Write a program to find out whether it is an odd number or even number. s

#include <iostream> // header file

using namespace std;

int main()
{

    int x;
    cout << " Enter any number: ";
    cin >> x;

    if (x % 2 == 0)
        cout << x << " is an even number ";
    else
        cout << x << " is odd number " << endl;

    return 0;
}