#include <iostream>
#include <cmath>
using namespace std;

double AreaofCircle(double radius) {
  double area;
  double pi = M_PI;
  area = M_PI * (radius * radius);
  return area;
}

int main () {
  double radius;
  cout << "input radius : ";
  cin >> radius;
  cout << AreaofCircle(radius);
  return 0;
}
