

//  write a program that inpur three numbers and display the largest number

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, largest;
    cout << " Enter three numbers ";
    cin >> x >> y >> z;
    
    // ternary condition to compare the value of the inpu
    largest = (x > y && x > z) ? x : (y > z) ? y
                                             : z;

    cout << " The Largest number is " << largest;
    return 0;
}