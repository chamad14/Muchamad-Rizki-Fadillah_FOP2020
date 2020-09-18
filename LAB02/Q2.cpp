#include <iostream>
using namespace std;
int main() {

//prompt for user to input the value
int agethisyear;
cout << "your age this year = ";
cin >> agethisyear;

//showing your age next year
int agenextyear = ++agethisyear;
cout << "your age next year is : " << agenextyear << endl;

//showing your age last year
int agelastyear = agethisyear - 2;
cout << "your age last year was : " << agelastyear << endl;

return 0;
}