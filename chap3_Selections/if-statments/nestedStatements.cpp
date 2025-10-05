#include <iostream>
using namespace std;

int main()
{
  double grade = 0;
  cout << "This program determines your grade\n";
  cout << "What is your grade percentage?:\n";
  cin >> grade;
  if (grade >=90){
    cout << "Your Grade is A !";
  }
  else if(grade >=80){
    cout << "Your Grade is B";
  }
  else if(grade >=70){
    cout << "Your Grade is C";
  }
  else if(grade >=60){
    cout << "Your Grade is D";
  }
  else{
    cout << "You Fail";
  }
}