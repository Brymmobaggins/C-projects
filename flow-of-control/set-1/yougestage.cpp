// If the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of the three

#include <iostream>

using namespace std;
int main()
{

    int ramAge, sulabhAge, ajayAge;
    cout << " Enter Ram's age ";
    cin >> ramAge;

    cout << " Enter Sublah's age ";
    cin >> sulabhAge;

    cout<< " Enter Ajay's age ";
    cin >> ajayAge;


    if (ramAge < sulabhAge && ramAge < ajayAge)
        cout << " Ram is the Youngest ";
    else if (sulabhAge < ramAge && sulabhAge < ajayAge)
        cout << " Sulabh is the youngest ";
    else
        cout << " Ajay is the youngest " << endl;

    return 0;
}