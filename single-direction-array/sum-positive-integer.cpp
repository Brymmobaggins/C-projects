// #write a program in c++ that sum of all positive integer in an array

#include <iostream>

using namespace std;

int main(){
    int arr[] = {-1,3,5, -2, -3};
    int sumPos = 0;
    
    for(int i = 0; i < 5; i++){
        if(arr[i] < 0){
            sumPos += arr[i];
        }
    }
    cout << "Sum of all Postive Number is: " << sumPos << endl;

    return 0;
}
