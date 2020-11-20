#include <iostream>
using namespace std;

//function prototype
void kalender(int a, int&tahun, int& bulan, int& hari);

int main ()
{
  int num,num1,num2,num3;
  cout << "enter number in integer: " << endl;
  cin >> num;

  kalender(num,num1,num2,num3);
  cout << "year: " << num1 << endl;
  cout << "month: " << num2 << endl;
  cout << "days: " << num3 << endl;
}

void kalender(int a, int&tahun, int& bulan, int& hari) 
{
  tahun = a / 365;
  a %= 365;
  bulan = a /30;
  a %= 30;
  hari = a;
}