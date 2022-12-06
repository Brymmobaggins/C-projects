#include <iostream>

using namespace std;

int addNumbers(int a, int b){
    int result;
    result = a + b;
    return result ;
}
int main(){
    int x,y,z;
    cout << "\n Enter first Number ";
    cin >> x;

    cout << " Enter second number ";
    cin >> y;

    z=addNumbers(x,y) ;
    cout << " The sum is " <<z <<endl;

    return 0;

}