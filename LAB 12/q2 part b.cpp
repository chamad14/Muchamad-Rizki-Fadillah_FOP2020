#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int listSize);
void selectionSort(int a[], int n);
int main()
{
  int list[] = {1, 4, 7, 2 , 6 , 3 , 5 };
  int x;
  int n = sizeof(list)/sizeof(list[0]);
  selectionSort (list,n);
  cout << "choose integer from 1- 7" << endl;
  cin >> x;
  cout << binarySearch(list, x, 7);

  return 0;
}

int binarySearch(const int list[], int key, int listSize)
{
  int min = 0;
  int max = listSize - 1;

  while (max >= min)
  {
    int mid = (min + max) / 2;
    if (key < list[mid])
      max = mid - 1;
    else if (key == list[mid])
      return mid;
    else
      min = mid + 1;
  }

  return -min - 1;
}

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