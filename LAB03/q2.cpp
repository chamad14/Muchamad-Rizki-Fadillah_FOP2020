#include <iostream>
using namespace std;

int main() {

//prompt for user to input the time
double time;
cout << "what time is it?" << endl;
cin >> time; 

//shows greetings

if ((time >= 00.00) && (time <= 11.59)) {
  cout << "good morning!";
}

if ((time >= 12.00) && (time <= 17.59)) {
  cout << "good afternoon!";
}

if ((time >= 18.00) && (time <= 23.59)) {
  cout << "good evening!";
}

else {
  cout << "error time inputted";
}

return 0;
}