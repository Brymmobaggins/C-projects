// Write a program to sum of digits of given integer number.

#include <iostream>

using namespace std;

int main(){
    int x, sum = 0;
    cout << " Enter any number: ";
    cin >> x;

    for( int i = 0; i >= sizeof(x); i++){
        sum += i;
    } 
    cout << " Sum of digits of number: "<<sum <<endl;
    

    return 0;
}