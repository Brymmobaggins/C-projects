// #write a program in c++ that sum of all positive integer in an array

#include <iostream>

using namespace std;

int main(){
    int arr[] = {-1,3,5, -2, -3};
    int sumNeg = 0; // initial a variable for the sum
    
    for(int i = 0; i < 5; i++){
        if(arr[i] < 0){     // if statement for each index value is less than 0
            sumNeg += arr[i]; 
        }
    }
    cout << "Sum of all Postive Number is: " << sumNeg << endl;

    return 0;
}
