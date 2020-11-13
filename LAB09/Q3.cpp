#include <iostream>
using namespace std;

void greeting (string a){
  cout << "haloo" << a << "senang bertemu denganmu";
}

int main () {
  string a;
  cout << "halo siapa namamu? ";
  cin >> a;
  greeting(a);

return 0;
}