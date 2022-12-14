// Write a C++ program to find the sum of inter array.

#include <iostream>
using namespace std;

int main()
{

    int arr[] = { 2,3, 1 }, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
        cout << " The sum is " << sum << endl;

    return 0;
}