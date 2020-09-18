#include <iostream>
using namespace std;

int main() {
//enter degree in celcius
double celcius;
cout << "enter degree in celcius: ";
cin >> celcius;

//obtain fahrenheit degree
double fahrenheit = (celcius * 9 / 5) + 32;

//display result
cout << "celcius in fharenheit is :" << fahrenheit << "degree" << endl;

return 0;
}