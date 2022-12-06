#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cout << " Enter two numbers ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\n after swapping numbes are : ";
    cout << a << " " << b;
}