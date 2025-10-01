#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    { // Outer loop for rows (1 to n)
        for (int j = 1; j <= 10; ++j)
        { // Inner loop for columns (1 to 10)
            cout << j * i << " ";
            if(j % 10 == 0){
                cout << endl;
            }
        }
    }
}