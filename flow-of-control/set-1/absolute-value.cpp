
// Find the absolute value of a number entered by the user

#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << " Enter a number ";
    cin >> x;

    if (x > 0)
        cout << " The absolute value of number is: " << x;
    else
        cout << " The absolute value of number is " << -(x) << endl;

    return 0;
}