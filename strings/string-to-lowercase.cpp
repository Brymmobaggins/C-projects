// write a program to converts a string to lower case

#include <iostream>
using namespace std;

int main()
{

    char str[80];

    cout << "Enter string: ";
    cin.getline(str, 80);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }
    cout << "The lowercase of string is: " << str << endl;

    return 0;
}