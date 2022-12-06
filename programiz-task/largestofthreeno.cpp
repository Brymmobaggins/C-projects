// program that find the largest of three numbers

#include <iostream>
using namespace std;

int main(){

   int n1, n2, n3;
   cout << " Enter three numbers: " ;
   cin >> n1 >> n2 >> n3;
    
    //  check if n1 is largest number
    if(n1 >= n2 && n1 >= 3)
      cout << " Largest number: is " << n1;

    // check if n2 is the largest number
    else if ( n2 >= n3 && n2 >= n1)
    cout << " Largest number: is " << n2;
    
     // if neither n1 nor n2 is the largest, n3 is the largest
    else
    cout << " Largest number: is " << n3;
    return 0;

}