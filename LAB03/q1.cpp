#include <iostream>
using namespace std;

int main () {

//user prompt for inputting number
int number1;
cout << "please input any number in integer" << endl;
cin >> number1;

//conditional statement
  if (number1 % 2 == 0) {
    cout << "your number is even" << endl;
  }
  else {
    cout << "your number is odd" << endl;
  }

return 0;
}