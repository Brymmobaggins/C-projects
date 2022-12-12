// Write a program using function which accept two integers as an argument and return its sum. Call this function from main( ) and print the results in main( )


#include <iostream>
using namespace std;

int sum(int a, int b){

    int result;
    result = a + b;
    return result;
}
int main(){

    int x, y, z;
    cout <<"\n Enter first Number: ";
    cin >> x;

    cout << " Enter second number: ";
    cin >> y;

    z = sum(x,y);
    cout << " The Sum is " << z << endl;

    return 0;
}