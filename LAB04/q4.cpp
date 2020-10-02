#include <iostream>
using namespace std;
int main () {

//for user to input their weight and height
float weight,height,bmi;
cout << "welcome to BMI calculator!" << endl;
cout << "please enter your weight (kg)" << endl;
cin >> weight;
cout << "please enter your height (m)" << endl;
cin >> height;
bmi = weight / (height * height);
cout << "your BMI is: " << bmi << endl;

//showing the BMI level
  if (bmi >= 30) {
    cout << "you are in obesity, do some healthy diet!" << endl;
  }
  else if (bmi >= 25 && bmi <= 29.9) {
    cout << "you are overweight, do some small diet!" << endl;
  }
  else if (bmi >= 18.5 && bmi <= 24.9) {
    cout << "your BMI is normal, keep it up!" << endl;
  }
  else if (bmi <= 18.5 ) {
    cout << "you are underweight, get something to eat!" << endl;
  }
  else {
    cout << "enter proper data!" << endl;
  }

  return 0;
}