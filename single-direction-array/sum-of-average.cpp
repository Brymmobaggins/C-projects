// Write a C++ program to find the sum and average of one dimensional integer array

#include <iostream>
using namespace std;

int main()
{

    int Arr[100], n, i, sum = 0;
    cout << "Enter number of elements you want to insert: ";
    cin >> n;

    for ( i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> Arr[i];
    }
    for ( i = 0; i < n; i++)

        sum += Arr[i];
        cout << "\n Sum of Array is: " << sum;
        cout << "\n The average of Array is :" << sum / i << endl;
    

    return 0;
}