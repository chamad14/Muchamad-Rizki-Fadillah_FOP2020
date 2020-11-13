#include <iostream>
using namespace std;
//sum
int sumNum (int a, int b){ //declaring sum function
  int result;
  result = a + b;
  return result;
}
//subtract
int subNum (int a, int b) { //declaring sub function
  int result;
  result = a - b;
  return result;
}
//multlipication
int mulNum (int a, int b) { //declaring mul function
  int result;
  result = a * b;
  return result;
}
//division
int divNum (int a, int b) { //declaring div function
  int result;
  result = a / b;
  return result;
}

//result
int main () {
  int a,b,r; //variables
  cout << "enter your first integer number : " << endl;
  cin >> a;
  cout << "enter your second integer number : " << endl;
  cin >> b;
  cout << "sum : " << sumNum(a,b) << endl;
  cout << "subtract : " << subNum(a,b) << endl;
  cout << "multlipication : " << mulNum(a,b) << endl;
  cout << "division : " << divNum(a,b) << endl;

return 0;
}