#include <iostream>
#include<cmath>
using namespace std;

int main() {

  double x,y,z,jawaban1,jawaban2,jawaban3,jawaban4;
  x = 0.58;
  double pi;
  pi = M_PI;
  jawaban1 = asin (x) * 180 / pi;
  cout <<"asin (0.58) = " << jawaban1 << endl;

  y = 0.29;
  jawaban2 = acos(y) * 180 / pi;
  cout << "acos (" << y << ") = " << jawaban2 << endl;

  z = 0.72;
  jawaban3 = atan(z) * 180 / pi;
  cout << "atan (" << z << ") = " << jawaban3 << endl;

  jawaban4 = sqrt(156 - 12);
  cout << "sqrt of (x) = " << jawaban4 << endl;

return 0;
}