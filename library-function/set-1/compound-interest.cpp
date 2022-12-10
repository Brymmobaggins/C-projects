// Write a program which input principal, rate and time from user and calculate compound interest.
// CI = P(1+R/100)T - P
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float principal, rate, time, compoundInterest;
    cout << " Enter Principal, Rate and time ";
    cin >> principal >> rate >> time;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    cout << " compound Interest is :" << compoundInterest;

    return 0;
}