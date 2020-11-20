#include <iostream>
using namespace std;

//function's prototype
int max(int a, int b); // max between two integers
int min(int a, int b); // min between two integers
double min(double a, double b); // min between two doubles
double min(double a,double b, double c); // min between three doubles

int main () {
  cout << max(2,3) << endl;
  cout << min(2,3) << endl;
  cout << min(2.1,3.4) << endl;
  cout << min(2.5,3.1,4.8) << endl;
}

int max(int a, int b) // max two integers function
{
  if (a > b ){
    return a;
  }
  else {
    return b;
  }
}

int min(int a, int b) // min two integers function
{
  if (a < b){
  return a;
  }
  else {
    return b;
  }
}

double min(double a, double b) // min two double function
{
  if (a < b){
    return a;
  }
  else {
    return b;
  }
}

double min(double a, double b, double c) // min three doubles function
{
  return min(min(a , b), c);
}