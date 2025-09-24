#include <iostream>
using namespace std;

int main()
{
    char userInput;
    char result;
    cout << "Enter an uppercase letter: ";
    cin >> userInput;
    if(userInput >= 97){
        cout << userInput << " is an invalid input";
    }
    else
    result = (userInput + 32 );
    cout << "The lowercase letter is: " << result;
}