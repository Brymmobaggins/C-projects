
// Write a program which accepts days as integer and display total number of years, months and days in it.
// for example :  If user input as 856 days the output should be 2 years 4 months 6 days

#include <iostream>

using namespace std;

int main(){

    int daysInput,  days, years, months;
    cout << " Enter Number of days " ;
    cin >> daysInput;

    years = daysInput / 365;

    daysInput = daysInput % 365;

     months = daysInput/30;

     days = daysInput % 30;

     cout << " Years : "<< years <<"\nMonths : " << months <<"\ndays : " << days <<endl ;


    return 0;
}