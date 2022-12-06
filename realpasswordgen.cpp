#include <iostream>
#include <cstdlib>  // inbuilt random function library
#include <ctime> // time library
using namespace std;


//  variable that hold strings of characters(0-9, A-z and a -z)
const char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

// variable that holds the length of characters
int string_length = sizeof(alphanum) - 1;


// The main return o
int main()
{
    int number;
    cout << "Enter the length of password: ";
    cin >> number;

    // condtion to check if number input is less 10
    if (number < 10)
    {
        cout << " Your Password length should be 10 to 16 characters " << endl;
    }
    
    // to condition that check if number is greater 16
    else if (number > 16)
    {
        cout << " Your Password length should be 10 to 16 characters "  ;
    }
      

    // random function and time funtion in milliseconds
    srand(time(0));
    cout << " Generated password : " ;

    for (int i = 0; i < number; i++)
    {

        cout << alphanum[rand() % string_length];
    }

    return 0;
}
