#include <iostream>
using namespace std;

int main()
{
    double num1(0), num2(0);
    char op;
    cout << "Enter the first number: ";
    cout << "Enter the second number: ";
    cout << "Choose the operation (+, -, *, /): ";
    cin >> num1 >> num2 >> op;

    switch(op){
        case '+': cout << "The result is: " << num1 + num2;
            break;
        case '-': cout << "The result is: " << num1 - num2;
            break;
        case '*': cout << "The result is: " << num1 * num2;
            break;
        case '/': if(num2 == 0){
            cout << "Cannot divide by zero.";
        }
        else
        cout << "The result is: " << num1 / num2;
            break;

        default: ;

    }
}