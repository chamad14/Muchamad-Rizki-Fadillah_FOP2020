#include <iostream>
using namespace std;
int main (){
//declare the variables and the loop
int a;
for (a=1; a<100; a+=3){
  if (a % 5 == 0){
    continue;
  }
  cout << a << endl;
}

return 0;
}