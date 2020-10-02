#include <iostream>
using namespace std;
int main () {

//Prompt for user to input their age
int age;
cout << "I will classify your age, pleas enter your age" << endl;
cout << "how old are you?" << endl;
cin >> age;

//if statement begins
  if (age >= 0 && age < 12) {
    cout << "Child" << endl;
  }
  else if (age >= 12 && age < 18 ) {
    cout << "Teenager" << endl;
  }
  else if (age >= 18) {
    cout << "Adult" << endl;
  }
  else {
    cout << "enter proper age!" << endl;
  }

return 0;
}