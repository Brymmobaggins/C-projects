#include <iostream>
using namespace std;

int multiple(int x, int y){
    int result;
    result = x * y;
    return result;
}

int main(){
    int x, y, d;
    cout << "\n Enter first number ";
    cin>> x;

    cout << " Enter second number "<< endl;
    cin >> y;

    d = multiple(x,y);
    cout << " Your answer is " <<d;

    return 0;
}