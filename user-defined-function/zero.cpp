// Write a function called zero_small() that has two integer arguments being passed by reference and sets the smaller of the two numbers to 0. Write the main program to access the function

#include <iostream>
using namespace std;

void zero_small(int a, int b)
{

    if (a < b)
        a = 0;
    else
        b = 0;
}

int main()
{

    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    
    cout << " Enter second number: ";
    cin >> y;
    zero_small(x, y);

    cout << " First number is " << x;
    cout << " Second number is " << y;

    return 0;

}
