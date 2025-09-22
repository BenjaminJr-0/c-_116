#include <iostream>
using namespace std;

int main()
{
   char userInput;
   int result;
   cin >> userInput;

   if(userInput >= 'A' && userInput <= 'Z'){
    result = static_cast<int>(userInput - 65);
    cout << result;
   }
   else if(userInput >= 'a' && userInput <= 'z'){
    result = static_cast<int>(userInput - 97);
    cout << result;
   }
   else{
    cout << "-1";
   }

}