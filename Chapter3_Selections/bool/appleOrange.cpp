#include <iostream>
using namespace std;

int main()
{
  int totalApples, totalOranges;
  bool balance;
  cout << "This program will tell you if there are less apples than oranges (or equal\n";
  cout << "How many apples do you have?: \n"; cin >> totalApples;
  cout << "How many oranges do you have?: \n"; cin >> totalOranges;
  balance = totalApples <= totalOranges;
  cout << (balance);

}