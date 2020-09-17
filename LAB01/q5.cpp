#include <iostream>
using namespace std;

int main() {

//Variables
int time1 = 14;
int time2 = 21;
int time1new = time1 % 12;
int time2new = time2 % 12;

//change to 12-hour format
cout << "the time" << time1 << ":00" << "changed into 12-hours fromat is = " << time1new << ":00" << endl;
cout << "the time" << time2 << ":00" << "changed into 12-hours format is = " << time2new << ":00" << endl;
return 0;


}