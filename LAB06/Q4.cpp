#include <iostream>
using namespace std;

int main () {
//declare the variables
int row;
int a,b;

cout << "input the row you want" << endl;
cin >> row;

for (a = 0; a <= row; a++){
  for (b = 0; b <= a; b++){
    cout << "*";
  }
  cout << endl;
}
for (a = row-1; a >= 0; a--){
  for (b = 0; b <= a; b++){
    cout << "*";
  }
  cout << endl;
}

return 0;
}