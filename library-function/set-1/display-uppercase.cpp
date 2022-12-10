// Write a program which accept a letter and display it in uppercase letter

#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char x;
    cout << " Enter any Letter :";
    x = getchar();
    x = toupper(x);
    cout << x << endl;

  
    return 0;
}