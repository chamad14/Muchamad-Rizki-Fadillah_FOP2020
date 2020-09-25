#include <iostream>
using namespace std;

int main () {

//input alphabets
char H;
cout << "input any alphabets" << endl;
cin >> H;

if (H == 'a' || H == 'i' || H == 'u' || H == 'e' || H == 'o') {
  cout << "it is vowels";
}

else if (H == '0' || H == '1' || H == '2' || H == '3' || H == '4' || H == '5' || H == '6' || H == '7' || H == '8' || H == '9') {
  cout << "it is not an alphabet" << endl;
}

else {
  cout << "it is consonant";
}

return 0;
}