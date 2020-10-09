#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

int num;
  while (num <= 50){
    if(num % 3 == 0 && num % 5 == 0){
      cout << "zipzap" << endl;
    }
    else if (num % 3 == 0){
      cout << "zip" << endl;
    }
    else if (num % 5 == 0){
      cout << "zap" << endl;
    }
    else {
      cout << num << endl;
    }
    num++;
  
  }
  return 0;
}