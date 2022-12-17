// Write a C++ program to reverse the element of an integer 1-D array

#include <iostream>
using namespace std;

int main()
{

    int arr[100], n, i, j, temp;
    cout << "Enter number of elements you want to insert: ";
    cin >> n;

    //  loop through the number you inserted
    for (i = 0; i < n; i++)
    {
        cout << "Enter the element" << i + 1 << ": ";
        cin >> arr[i];
    }
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
    }
    cout << "\nReverse array" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}