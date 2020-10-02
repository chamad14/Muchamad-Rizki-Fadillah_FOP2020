#include <iostream>
using namespace std;
int main() {

//prompt for user to enter the date
int month;
int year;
cout << "enter month" << endl;
cin >> month;
cout << "enter year" << endl;
cin >> year;

switch (month){

  //if user enters january
  case 1 :
    cout << "it's jauary, " << "it has 31 days";
    break;

  //if user enters february
  case 2 :
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
      cout << "it's february, " << "it has 29 days"<< endl;
      }
    else {
      cout << "it's february, " << "it has 28 days" << endl;
    }
      break;

  case 3 :
    cout << "it's march, " << "it has 31 days";
    break;
  
  case 4 :
    cout << "it's april, " << "it has 30 days";
    break;

  case 5 :
    cout << "it's may, " << "it has 31 days";
    break;

  case 6 :
    cout << "it's june, " << "it has 30 days";
    break;

  case 7 :
    cout << "it's july, " << "it has 31 days";
    break;

  case 8 :
    cout << "it's august, " << "it has 30 days";
    break;

  case 9 :
    cout << "it's september, " << "it has 31 days";
    break;

  case 10 :
    cout << "it's october, " << "it has 30 days";
    break;
  
  case 11 :
    cout << "it's november, " << "it has 31 days";
    break;
  
  case 12 :
    cout << "it's december, " << "it has 30 days";
    break;

//if user input >12
  default :
    cout << "december is the last month of the year";
    break;

}


return 0;

}