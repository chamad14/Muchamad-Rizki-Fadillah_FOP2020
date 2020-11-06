//program to calculate angle given
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double pi; 
  double x = 37;
  pi = M_PI; // pi declaration with cmath function
  double jawaban1;
  jawaban1 = sin (x * (pi / 180)); // change into radiant unit
  cout << jawaban1 << endl; //result

  double y = 53;
  double jawaban2;
  jawaban2 = cos (y * (pi/180)); // change into radiant unit
  cout << jawaban2 << endl; // result

  double z = 60;
  double jawaban3;
  jawaban3 = tan (z * (pi/180)); // change into radiant unit
  cout << jawaban3 << endl; // result

return 0;
}