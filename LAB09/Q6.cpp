#include <iostream>
using namespace std;

//ceiling
int ceil(double Num){
  int result;
  result = Num;
  result += 1;

  return result;
}

//floor
int floor(double Num){
  int result;
  result = Num;

  return result;
}

//squareroot
double squareroot(double a){
  double x = a;
  double y = 1;

  while (x > y){
    x = (x + y) / 2;
    y = a / x;
  }
  return x;
}

//power
int pow(int Num, int powNum){
  int result = Num;

  for (int i = 1; i < powNum; i++){
    result *= Num;
  }
  return result;
}

int main () {
  double num = 20.2;
  double num2 = 25;
  cout << ceil (num) << endl;
  cout << floor(num) << endl;
  cout << squareroot(num2) << endl;
  cout << pow(2,2) << endl;

  return 0;
}