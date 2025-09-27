#include <iostream>
using namespace std;

int main()
{

    int userInput;
    while (true)
    {
        cin >> userInput;
        if (userInput < 0)
        {
            break;
        }
        if (userInput % 5 == 0)
        {
            cout << userInput << endl;
        }
    }
}