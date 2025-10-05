#include <iostream>
using namespace std;

int main()
{
    string result;
    int month;
    cin >> month;

    result = (month == 1) ? "jan" : 
             (month == 2) ? "feb" : 
             (month == 3) ? "mar" : 
             (month == 4) ? "apr" : 
             (month == 5) ? "may" : 
             (month == 6) ? "jun" : 
             (month == 7) ? "jul" : 
             (month == 8) ? "aug" : 
             (month == 9) ? "sep" : 
             (month == 10) ? "oct" : 
             (month == 11) ? "nov" : 
             (month == 12) ? "dec" : "does not exist";
}