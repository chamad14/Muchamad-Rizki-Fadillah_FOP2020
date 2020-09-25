#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
//declare random number 
srand (time(NULL));
float num = rand() % 100, answer;

//prompt for user for inputting their numbers
cout << "what's up dude! Let's play a simple game!" << endl;
cout << "from 1 - 100, you should guess what number I have" << endl;
cout << "now, guess my number?" << endl;
cin >> answer;

//the game starts, user starts guessing the number
if (answer > 0 && answer <= 100 ) {

    if (answer == num)  {
    cout << "your answer is correct dude!" << endl;
    }

    else if (answer < num) {
    cout << "your answer is too low dude, I got " << num << " for my number" << endl;
    }

    else {
    cout << "your number is too high dude, I got "<< num << " for my number" << endl;
    }
  
  }

else {
  cout << "yours are out from the range number dude!" << endl;
}

return 0;
}