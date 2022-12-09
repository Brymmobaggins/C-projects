// Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered

#include <iostream>

using namespace std;

int main()
{

    int n, posCount = 0, negCount = 0, zeroCount = 0;
    char choice;

    do
    {
        cout << "Enter a number : ";
        cin >> n;

        if (n < 0)
            negCount++;
            
        else if (n > 0)
            posCount++;
        else
            zeroCount++;

        cout << " do you want to continue(y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Positve Numbers :" << posCount << "\n Negative Number :" << negCount << "\n Zero number " << zeroCount << endl;

    return 0;
}
