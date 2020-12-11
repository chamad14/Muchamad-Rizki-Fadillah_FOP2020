#include <iostream>
#include <fstream>
using namespace std;

//binarySearch
void binarySearch(const int list[], int key, int listSize, int index)
{
  int min = 0;
  int max = listSize - 1;

  while (max >= min)
  {
    int mid = (min + max) / 2;
    if (key < list[mid]){
      max = mid - 1;
    }  
    else if (key == list[mid]){
      index= mid;
      break;
    }
    else if (key > list[mid])
      min = mid + 1;
  }
  
  if (key == list[index]){
    cout << "Congratulation, you win " << endl;
  }
  else {
    cout << "you lose, get another ticket for the next lottery" << endl;
  }
  
  
}

//selection sorting
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}


int main () {

  int myArray[7];
  int lotnum,index;
  int n = sizeof(myArray)/sizeof(myArray[0]);
  //given myArray
  ifstream file("winlist.txt");
    for(int i = 0; i < 7; i++){
      file >> myArray[i];
    }
  //after sorting
  selectionSort(myArray, n);
  for (int i = 0; i < n; i++)
   cout<< myArray[i] << endl;


  //user validation
  cout << "enter your 4 digits lottery number" << endl;
  cin >> lotnum;
  if (lotnum == static_cast<char>(lotnum)){
    cout << "error input" << endl;
    return 0;
  }
  else if (lotnum < 999 && lotnum > 9999){
    cout << "error input" << endl;
    return 0;
  }
  
  //binarySearch
  binarySearch(myArray,lotnum,7,index);

return 0;
}