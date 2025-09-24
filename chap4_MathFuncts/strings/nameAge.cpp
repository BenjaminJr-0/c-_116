#include <iostream>
#include <string>
using namespace std;

int main()
{
// Write your code below
string name;
int age;

getline(cin, name, ':');
cin >> age;

if(age >= 50){
    cout << name << " is old";
}
else{
    cout << name << " is not old";
}

}