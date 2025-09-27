#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1, counter = 1;

    cin >> n;
    if (n == 0 || n == 1)
    {
        factorial = 1;
    }
    else
    {
        while (counter <= n)
        {
            
            factorial *= counter;
            counter++;
            
        }

    }
    cout << factorial;
}