// Write a C++ program to swap first and last element of an integer 1-d array

#include <iostream>
using namespace std;

int main()
{

    int arr[100], n, i, temp;
    cout << " Enter the Number of elment you want to insert: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i+1 << ":";
        cin >> arr[i];
    }
     

    //  swapping the values
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    cout << "\n Array after after swapping" << endl;
     
    //  loop through the input and print it on the console.
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}