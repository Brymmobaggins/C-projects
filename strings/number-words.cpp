// write a program that calculate the number of word in a string

#include <iostream>
using namespace std;
int main(){

  char str[80];
  cout << "Enter String: ";
  cin.getline(str, 80);

  int words = 0; // holds number of words

  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == ' ') {
        words++;
    } 
  }
  cout << "Number of words = " << words+1 << endl;

  return 0;

} 