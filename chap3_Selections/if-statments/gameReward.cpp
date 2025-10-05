#include <iostream>
using namespace std;

int main()

{
  /*
  Homework: 
  Assignment: In a gaming app, players earn rewards based on their player level and the number of levels they clear in a day. There are two types of players: Elite and Regular.
   Elite players receive 50 bonus points for clearing any 5 levels in a day and an extra 30 points if those levels include the challenging Boss Level. Regular players receive 
   30 bonus points for clearing any 3 levels in a day and an additional 20 points if at least one of those levels is a Puzzle Level.

  Task: Write a set of nested if/else statements that assigns bonusPoints the appropriate value based on the bool variable isElitePlayer and the int variable levelsCleared.
  Additionally, consider boolean variables clearedBossLevel and clearedPuzzleLevel for Elite and Regular players, respectively.

  Note: You will need to write the nested if structure and the assignment of the correct value to the variables. Assume all the variables have been declared and assigned with 
  appropriate values.
  */
 int bonusPoints = 0;
 bool isElitePlayer;
 int levelsCleared;
 bool clearedBossLevel;
 bool clearedPuzzleLevel;



 if(isElitePlayer == true){
  if(levelsCleared >=5){
    if(clearedBossLevel == true){
      bonusPoints += 80;
    }
    else{
      bonusPoints += 50;
    }
  }
  else {
    bonusPoints += 0;
  }
 }

 //regular Player
 else{
  if(levelsCleared >= 3){
    if(clearedPuzzleLevel == true){
      bonusPoints += 50;
    }
    else{
      bonusPoints += 30;
    }
  }
  else {
    bonusPoints += 0;
  }
 }















}