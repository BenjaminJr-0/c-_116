/*Create a program that helps users plan activities for the weekdays using a switch statement. 
The user will input a number representing a day of the week, and based on this input, 
the program will suggest an activity.
This assignment will deepen your understanding of switch statements, 
including handling multiple cases with the same outcome and incorporating a default case.
*/
#include <iostream>
using namespace std;

int main()
{
    short int day = 0;
    string monday = "Start the week with a workout.";
    string tuesday = "Work on a personal project.";
    string wednesday = "Mid-week break! Time for a movie night.";
    string thursday = "Work on a personal project.";
    string friday = "Hang out with friends.";
    string saturday = "Family time! Plan a family activity or outing.";
    string sunday = "Family time! Plan a family activity or outing.";

    cout << "Enter the number for the day of the week (1-Monday to 7-Sunday): ";
    cin >> day;

    switch(day){
        case 1: cout << monday;
            break;
        case 2: cout << tuesday;
            break;
        case 3: cout << wednesday;
            break;
        case 4: cout << thursday;
            break;
        case 5: cout << friday;
            break;
        case 6: cout << saturday;
            break;
        case 7: cout << sunday;
            break;
        default: cout << "Invalid input. Please enter a number from 1 to 7.";
    }

}