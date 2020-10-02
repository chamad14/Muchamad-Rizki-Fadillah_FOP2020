#include <iostream>
using namespace std;
int main() {

float score1,score2,score3,average;
//prompt for user to input their score and shows average
cout << "please enter your 1st exam score" << endl;
cin >> score1;
cout << "please enter your 2nd exam score" << endl;
cin >> score2;
cout << "please enter your 3rd exam score" << endl;
cin >> score3;
average = (score1 + score2 + score3)/3;
cout << "here is your average score: "<< average << endl;

//calculate the final grade
  if (average >= 80) {
    cout << "your final garde is A" << endl;
  }
  else if (average >= 75 && average < 80) {
    cout << "your final grade is AB" << endl;
  }
  else if (average >= 70 && average < 75) {
    cout << "your final grade is B" << endl;
  }
  else if (average >= 65 && average < 70) {
    cout << "your final grade is BC" << endl;
  }
  else if (average >= 60 && average < 65) {
    cout << "your final grade is C" << endl;
  }
  else if (average >= 40 && average < 60) {
    cout << "your final grade is D" << endl;
  }
  else {
    cout << "your final grade is E" << endl;
  }

return 0;
}