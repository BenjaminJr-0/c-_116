#include <iostream>
using namespace std;

class circle{
public:
    double radius;
    circle()
    {
        radius = 1;
    }

    circle(double newradius)
    {
        radius = newradius;
    }

    double getArea()
    {
        return radius * 3.14159;
    }
};

double usrInput;

int main(){
    cout << "This program will tell you the area of your circle\n";
    cout << "Please enter the radius of your circle: ";
    cin >> usrInput;

    circle circle1(usrInput);
    cout << "the area for your circle is: " << circle1.getArea();
}