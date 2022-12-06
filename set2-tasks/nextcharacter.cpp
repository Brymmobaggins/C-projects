
// a program that accept a character and display the next character
#include <iostream>

using namespace std;

int main(){
    
    char nextChar;
    cout <<"\n Enter a Character ";
    cin >> nextChar;

    nextChar++;
    cout << " The next character is  "<<(char) toupper(nextChar++);

    return 0;
}