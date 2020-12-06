#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int myArray[100];
  int min,max;
  int sum = 0;

  ifstream file("randnum.txt");
    for(int i = 0; i < 100; i++){
      file >> myArray[i];
      cout << myArray[i] << endl;
    }

  min = myArray[0];
  for (int i=0;i<100;i++){
      if(myArray[i]<min){
        min = myArray[i];
      }
  }

  max = myArray[0];
  for (int i=0;i<100;i++){
    if(myArray[i]>max){
      max = myArray[i];
    }
  }

  cout << "nilai min : " << min << endl;
  cout << "nilai max : " << max << endl;

  return 0;
}