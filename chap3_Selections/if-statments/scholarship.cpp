#include <iostream>
using namespace std;

int main()
{
  /*
  From Homework:
   The student must have a GPA of 3.8 or higher. The student must be involved in at least two extracurricular activities. The student must have completed at least 50 hours of community service.
    If the GPA requirement is not met, it should assign 0 to the variable scholarshipLevel
    If the GPA requirement is met, but no other, assign 1 to scholarshipLevel
    If the GPA and the extracurriculars requirement are met, but no other, assign 2 to scholarshipLevel
    If the GPA, extracurriculars , and community service requirement are met, assign 3 to scholarshipLevel
  */

  double gpa;
  int extracurriculars;
  int serviceHours;
  int scholarshipLevel;
  cin >> gpa;
  cin >> serviceHours;
  cin >> extracurriculars;

  if(gpa >= 3.8){
    if(extracurriculars >= 2){
      if(serviceHours >= 50){
        scholarshipLevel = 3;
      }
      else scholarshipLevel = 2;
    }
    else scholarshipLevel = 1;
  }
  else{
    scholarshipLevel = 0;
  }

  cout << scholarshipLevel;


}