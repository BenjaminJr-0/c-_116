#include <iostream>
using namespace std;

int main()
{
  //list the xize of the array   in this case 3
  int myArray[3];
  //assign the value of the elements in the array
  myArray[0] = 2;
  myArray[1] = 3;
  //list the value of array at element 2 to the value of the array at 0 and 1
  myArray[2] = myArray[0] + myArray[1];
  cout << myArray[2] << endl;

  //Increments the element at index 2
  myArray[2]++;
  cout << myArray[2] << endl;

  for(int i = 0; i<10; i++){
    myArray[2] = i;
    cout << "Array number is now: " << myArray[2] << endl;
  }
}