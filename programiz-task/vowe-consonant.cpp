
//  Program that check for vowel and consonant manually
#include <iostream>
using namespace std;

int main()
{

    char input;
    bool isLowerCase, isUpperCase;

    cout << " Enter any Alphabet";
    cin >> input;

    // evaluates to 1 (true) if input value is lowercase
    isLowerCase = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');

    // evaluates to 1 (true) if input value is Uppercase
    isUpperCase = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');

    //  show error message if input is not an alphabet

    if (!isalpha(input))

        cout << "Error! Non-alphabetic Character. ";

    else if (isLowerCase || isUpperCase)

        cout << input << " is a vowel. ";
  
    else

        cout << input << " is a consonant ";

    return 0;
}
