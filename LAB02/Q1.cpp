#include <iostream>
using namespace std;
int main() {

//promt for user to input the value
int length;
cout << "Enter an integer for length :";
cin >> length;

int width;
cout << "Enter an integer for width :";
cin >> width;

//display the result of area
cout << "the area is = " << length * width << endl;

//display the result of perimeter
cout << "the perimeter is = " << 2 * (length + width) << endl;

return 0;
}