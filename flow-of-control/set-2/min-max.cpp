

#include <iostream>

using namespace std;

int main()
{

    int n, max = 0, min = 32456;

    cout << " Enter number: ";
    cin >> n;

    if (n > max)
        max = n;
    if (n < min)
        min = n;

    char choice;
    cout << " Do you want to continue (Y/N)?";
    cin >> choice;

    if (choice == 'Y')
        cout << " Maximum Number : " << max;

    return 0;
}