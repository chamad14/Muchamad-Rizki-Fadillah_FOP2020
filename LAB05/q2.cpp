#include <cstdlib>
#include <iostream>
using namespace std;
int main() 
{
//Local constants
int Count = 0; //Total questions
int score = 0; 
//Local variable
int Num1    = rand() % 10; //Random number 1-10
int Num2    = rand() % 10; //Random number 1-10
int Correct = Num1 + Num2 ;
int Answer;

//prompt to start the quiz
cout << "welcome to the math quiz" << endl;
cout << "i'll give you ten math problmes that you need to solve" << endl;
cout << "ready or not here I go!" << endl;

//while loop less then 10
cout << "The quiz starts now" << endl;

    while (Count <= 9) {
    srand(time(NULL));
    Num1    = rand() % 10;
    Num2    = rand() % 10;
    Correct = Num1 + Num2 ;
    cout << Num1 << "+" << Num2 << endl;
    cin >> Answer;
    Count++;

    if (Answer == Correct){
        score++ ;
        cout << "Correct!" << endl ;
    }
    else if (Answer != Correct){
        cout << "Incorrect!" << endl;
    }
    }

    if (score <= 7){
      cout << "you didn't pass the quiz :(" << endl;
    }
    
//display final score
cout << "your final grade is " << score << " out of 10" << endl;

return 0; 
}