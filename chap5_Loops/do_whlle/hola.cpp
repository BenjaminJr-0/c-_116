#include <iostream>
using namespace std;

int main()
{
    int counter = 1;

    do
    {
        if (counter % 10 == 0)
        {
            cout << "Good-bye\n";
        }
        else
        {
            cout << "Hello, World!\n" << counter;
        }
        counter++;
    } while (counter <= 50);
    return 0;
}