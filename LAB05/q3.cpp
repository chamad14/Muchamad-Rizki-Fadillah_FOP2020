#include<iostream>
using namespace std;
#include <string>
int main() {
//state the variables
  int answer;
  string ContinueLoop = "yes";
  
  //generate random number
  srand(time(NULL));
  int num = rand() % 100;
//prompt for users
  cout << "hey, let's play a game!" << endl;
  cout << "can you guess my number?" << endl;
  cout << "ready or not, hear I come!" << endl;

  while (ContinueLoop == "yes"){
  //user guess the number
  cout<< "Whats your answer?" <<endl;
  cin>>answer;
   
   //State the condition
     if (answer == num){
       cout<< "nice try bro!" << endl;
        srand(time(NULL));
        num = rand() % 100;
     } 
     else if (answer < num){
       cout<< "Bruh, your number's too low, my number is = " << num << endl;
     }
     else {
       cout<< "Bruh, its still higher than my number, my number is = " << num << endl;
     }
     //ask if user wants to continue
     cout<< "one more round, please:) " << endl;
     cin>> ContinueLoop;
     if (ContinueLoop == "No" ) {
       cout<< "Thankyou for playing the game" << endl;
     }
} 
     return 0;
}