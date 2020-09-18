#include <iostream>
#include <math.h>
using namespace std;
int main() {

//prompt for user to input value
double radius;
double pi = 3.14;
cout << "enter the value of radius : ";
cin >> radius;

//showing the result of volume
cout << "the volume is = " << 1.333 * pi * pow(radius,3) << endl;

//showing result of surface area
cout << "the surface area is = " << 4 * pi * pow(radius,2) << endl;

return 0;
}