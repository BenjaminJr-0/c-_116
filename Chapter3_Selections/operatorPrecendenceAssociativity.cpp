#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double result;
    double discriminant;
    double radicalResult;
    double root1,root2;
    double radDiv;

    //Gathers user input
    cin >> a >> b >> c;
    
    //math for the quaratic formula
    discriminant = ((pow(b,2))-(4*a*c));
    radicalResult = pow( discriminant, 0.5);
    
    //tests if there are roots or not.
    if(discriminant < 0){
        cout << "The equation has no real roots";
    }
    else if(discriminant == 0){
        root1 = (-b + radicalResult) / (2 * a);
        cout << "The root is " << root1;
    }
    else{
        root1 = (-b + radicalResult) / (2 * a);
        root2 = (-b - radicalResult) / (2 * a);
        cout << "The roots are " << root1 << " " << root2;
    }
    return 0;
}