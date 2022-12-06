// write a program that multiple two numbers 

#include <iostream>  // header file
using namespace std;

int main(){
     
     // creating variable that holds our input
    float x, y, result;
    cout<< " Enter first Number ";
    cin >> x;

    cout << " Enter second Number ";
    cin >> y;

    result = x * y;
    cout << " The Answer is " <<result;

    return 0;
}