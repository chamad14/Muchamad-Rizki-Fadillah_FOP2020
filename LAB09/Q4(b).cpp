#include <iostream>
#include <cmath>
using namespace std;

double volume(double radius) {
  double volume;
  double pi = M_PI;
  volume = (4.0/3.0) * M_PI * (radius * radius * radius);
  return volume;
}

int main () {
  double radius;
  cout << "input radius : ";
  cin >> radius;
  cout << volume(radius);
  return 0;
}