// write a program that converts a string to uppercase

#include <iostream>
using namespace std;

int main()
{

    char str[80];
    cout << "Enter your string: ";
    cin.getline(str, 80);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
    }
    cout << "The Uppercase of string is: " << str << endl;

    return 0;
}
// int main(){
//     char x;
//     cout << "Enter a String: ";
//     cin >> x;

//     x = x- 32;
//     cout << "String lowecase is: "<< x << endl;

//     return 0;
// }
