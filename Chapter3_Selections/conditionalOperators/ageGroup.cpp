#include <iostream>
using namespace std;

int main()
{
    unsigned int age;
    string result;

    cin >> age;

    result = (age >= 65) ? "Senior" :
             (age >= 20) ? "Adult"  :
             (age >= 13) ? "Teen"   :
             (age >= 0)  ? "Child"  : "Something weird happened";
}