#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int listSize);

int main()
{
  int list[] = {1, 2, 3, 4, 5, 6, 7};
  int x;
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