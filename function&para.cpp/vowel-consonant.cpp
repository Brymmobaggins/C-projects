#include <iostream>

using namespace std;

char checkVowel(char x)
{

  bool isVowel;
  isVowel = (x == "a" || x == "e" || x == "i" || x == "o" || x == "u");

  // Show error message if input is not vowel
  if (isVowel(a))
    cout << a << " is a Vowel. ";
  else
    cout << a << " is a consonat ";

  return isVowel;
}

int main()
{

  char a;
  cout << " Enter any Alphabet ";
  cin >> a;

  // if(isVowel(a))
  // cout << a << " is a Vowel. ";
  // else
  // cout << a << " is a consonat ";

  return 0;
}
