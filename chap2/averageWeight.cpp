#include <iostream>
using namespace std;
int main(){

    double num1, num2, num3;
    double Weight = 0;
    double averageWeight = 0;
    cin >> num1 >> num2 >> num3;
    Weight = (num1 + num2 + num3);
    averageWeight = (Weight / 3.0);
    cout << averageWeight;
    return 0;
}