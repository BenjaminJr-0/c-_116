#include <iostream>
using namespace std;

int main()
{
    int inputFile;
    int maxMeow = 0;
    bool finish = true;
    while(finish == true && maxMeow < 100){
        cin >> inputFile;
        cout << "Meow: " << inputFile << endl;
        if(inputFile < 0){
            cout << "Woof\n";
            finish = false;
        }
    }
    return 0;
}