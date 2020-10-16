#include <iostream>
using namespace std;

int main() {
//pattern format code
for (int row = 1; row<=5; row ++){
  for (int col = 1; col<=row; col++){
    cout << "*";
  }
  cout << endl;
}

return 0;
}