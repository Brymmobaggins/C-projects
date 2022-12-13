// Write a function that receives two numbers as an argument and display all prime numbers between these two numbers. Call this function from main( )

#include <iostream>
using namespace std;

void showPrime(int a, int b)
{

    bool flag;

    for (int i = a + 1; i <= b; i++)
    {
        flag = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == false & i > 1)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int x, y;
    cout << " Enter the first number: ";
    cin >> x;

    cout << " Enter the second number: ";
    cin >> y;

    showPrime(x, y);

    return 0;
}