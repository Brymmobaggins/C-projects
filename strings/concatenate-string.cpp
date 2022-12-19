// write a program to concetenate one string content to another

#include <iostream>
using namespace std;
// int main()
// {

//     string x, y, result;
//     cout << " Enter first string: ";
//     cin >> x;
//     cout << "Enter second string: ";
//     cin >> y;
//     result = x + y;

//     cout << result << endl;

//     return 0;
// }

// int main(){

//     string x,y, result;
//     cout << "Enter first String: ";
//     getline(cin, x);

//     cout << "Enter second string: ";
//     getline(cin, y);

//     result = x + y ;

//     cout << " Resultant String =  "<< result << endl; 

//     return 0;
// }

// using for loop on string object
int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    cin.getline(str1, 80);
    
    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of first string
    
    //Find length of first string.
    for(l = 0; str1[l] != '\0'; l++);

    //Adding second string content in first
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }
	
    str1[l] = '\0';

    cout << "\nThe first string after adding second string content:" << str1 << endl;			
	
    return 0;
}