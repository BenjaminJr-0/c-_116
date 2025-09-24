#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    string userInput;
    string instructions;
    int location;
    char letterChange;
    char nen = '0';
    cin >> userInput;

    getline(cin, instructions, ' ');
    cin >> letterChange;

    
    cout << instructions.at(0);
     instructions = static_cast<char>(instructions.at(0));
    cout << instructions;
}

//Is unfinished and does not work
// program should handle string followed by another string with a set of instructions like 10 b with the number being the index in the first string and the b being the letter to be replaced.