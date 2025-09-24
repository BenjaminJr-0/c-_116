#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;
    double sideNum;
    double sideLength;
    double PI = 3.14159265359;

    cout << "Enter the number of sides: ";
    cin >> sideNum;
    cout << "Enter the length of a side: ";
    cin >> sideLength;
    area = (sideNum * pow(sideLength, 2) / (4 * tan(PI/sideNum)));

    cout << "The area of the polygon is " << area;
}