
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// void myfunction(){
//     cout << " My name is Ibrahim";

// }
// int main(){
//     myfunction();
//     return 0;
// }

// string randomLetters = ""
// void negativeNum(int randomLetters[]){

// cout << " Enter the length of Password: "
// int total = 0
//     for(int i = 0; i < randomLetters.length; i++){
//         if( randomLetters[i] < 0){
//             cout << randomLetters[i];
//         }
//     }
// }

// int main(){
//     negativeNum({1,3,4,-2, -4});
//     return 0;

// }

// int sum(int a, int b)
// {
//     int total;
//     total = a + b;
//     return total;
// }
// int main()
// {
//     int x, y, s;
//     cout << " Enter first number : ";
//     cin >> x;
//     cout
//         << " Enter second number : ";
//     cin >>
//         y;
//     s = sum(x, y);
//     cout
//         << " The sum is : " << s;

//     return 0;
// }
int divide(int a, int b)
{
    int result;
    result = a / b;
    return result;
}
int main()
{
    int x, y, d;
    cout << " Enter your first number : ";
    cin >> x;
    cout << " Enter your second numebr: ";
    cin >> y;

    d = divide(x, y);
    cout << " The result is : " << d;

    return 0;
}

