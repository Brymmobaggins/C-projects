// Write a program which display a number between 10 to 100 randomly

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int n;
    srand(time(0));
    n = rand() % 91 + 10;
    cout << " The random selected number is :" << n << endl;

    return 0;
}
