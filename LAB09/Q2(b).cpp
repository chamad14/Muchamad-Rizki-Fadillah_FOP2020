#include <iostream>
using namespace std;

string kikikurus(int a) {
  if (a % 2 == 0) {
    return "even";
  }
  else {
    return "odd";
  }
}

int main () {
  int a;
  cout << "input an integer" << endl;
  cin >> a;
  cout << "your number is : " << kikikurus(a) << endl;
  return 0;
}