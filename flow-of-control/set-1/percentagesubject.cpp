// The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail

#include <iostream>
using namespace std;
int main()
{

    int sub1, sub2, sub3, sub4, sub5, percentage;
    cout << " Enter marks of five Subjects ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    percentage = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    if (percentage >= 60)
        cout << " First division ";
    else if (percentage >= 50)
        cout << " Second Division ";
    else if (percentage >= 40)
        cout << " Third Division ";
    else
        cout << " fail" << endl;

    return 0;
}