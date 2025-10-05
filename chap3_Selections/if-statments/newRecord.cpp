#include <iostream>
using namespace std;

int main()
{
  int Highscore = 100;
  int score = 0;
  cout << "This program determines if you beat the highscore of 100\n";
  cout << "What is your score?: ";
  cin >> score;
  if (score > Highscore){
    cout << "Congrats, You beat the highscore!!\n";
  }
}