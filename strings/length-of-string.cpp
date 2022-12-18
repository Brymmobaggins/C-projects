// write a program to check the length of string

#include <iostream>
// #include <c.string>
using namespace std;

// int main(){
    
//     string  = "Hello";
//     //  size of string object using size() method
//     cout << str.uuu

// size of string object using for loop method
int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);
    
    int i; //Hold length of string
    
    for(i = 0; str[i] != '\0'; i++);

    cout << "Length of string is: " << i;
	
    return 0;
}

// size of string object using size method
int main(){

    string x;
    cout << "Enter String: ";
    cin >> x;

    cout <<" The length of the string is: " << x.size() << endl;


    return 0;
}



// size of string object using length method
int main(){

    string x;
    cout << "Enter String: ";
    cin >> x;

    cout <<" The length of the string is: " << x.length() << endl;


    return 0;
}


