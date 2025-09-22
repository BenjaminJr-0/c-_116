#include <iostream>
using namespace std;

int main()
{
    char userInput;
    int result;
    cin >> userInput;
    result = ('a' + (userInput - '0'));
    cout << result;
}