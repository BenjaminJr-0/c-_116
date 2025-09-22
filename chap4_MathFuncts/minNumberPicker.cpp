#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c;
    int result1;
    int result2;
    int result3;
    cin >> a >> b >> c;

    result1 = min(a, b);
    result2 = min(result1, c);
    result3 = (result2 == -6) ? 4: result2;
    cout << result3;

}