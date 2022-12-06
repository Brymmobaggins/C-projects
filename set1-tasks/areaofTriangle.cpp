#include <iostream>

using namespace std;

int main(){

    float length, breadth, area;

    cout << "\n Enter your Length : ";
    cin >> length;

    cout << " Enter your breadth : ";
    cin >> breadth;

    area = length * breadth;
    cout << "Area of a Rectangle: "<< area;

    return 0;

}