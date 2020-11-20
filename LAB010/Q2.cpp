#include <iostream>
using namespace std;

void fahrenheit(double& f, double c) 
{
  f = (c * 9/5) + 32;
}

void celcius (double &c, double f)
{
  c = (f - 32) * 5/9;
}

int main () 
{
  double c,f;
  cout << "masukan celcius: ";
  cin >> c;

  fahrenheit(f,c);

  cout << "fahrenheit: " << f << endl;

  cout << "masukan fahrenheit: ";
  cin >> f;

  celcius(c,f);

  cout << "celcius: " << c << endl;

  return 0;
}