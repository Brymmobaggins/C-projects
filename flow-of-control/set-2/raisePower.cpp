// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another

#include <iostream>

using namespace std;

int main()
{

    int n, p, r = 1;
    cout << " Enter the base number and exponential";
    cin >> n >> p;

    for (int i = 1; i <= p; i++)
        r = r * n;
        cout << "Result :"<< r;

        return 0;
}