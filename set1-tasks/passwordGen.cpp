
// libraries to generate password

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;

// declaring a function
// string genPassword(){

string genPassword(string input){
    if()
    
}

// The main method
int main()
{
    int n;
    cout << "Enter the length of password:";
    cin >> n;
    srand(time(0));
    cout << "Generated password:";
    for (int i = 0; i < n; i++)
        cout << alphanum[rand() % string_length];
    return 0;
}
