#include <iostream>
using namespace std;

void swap (int *a, int *b){
int temp;

temp = *a;
*a = *b;
*b = temp;
}

int main () {
  int a = 1;
  int b = 2;

//before swapping
  cout << "before" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

//after swapping
swap (&a, &b);
cout << "after" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
return 0;
}