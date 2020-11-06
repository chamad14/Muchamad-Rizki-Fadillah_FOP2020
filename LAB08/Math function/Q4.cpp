#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double a = 5.89;
  double b = 7.2;
  double c = 12.05;
  double d = 0.03;

  cout << "ceil 5.89 is = " << ceil(a) << endl;
  cout << "floor 5.89 is = " << floor(a) << endl;

  cout << "ceil 7.2 is = " << ceil(b) << endl;
  cout << "floor 7.2 is = " << floor(b) << endl;

  cout << "ceil 12.05 is = " << ceil(c) << endl;
  cout << "floor 12.05 is = " << floor(c) << endl;

  cout << "ceil 0.03 is = " << ceil(d) << endl;
  cout << "floor 0.03 is = " << floor(d) << endl;

return 0;
}