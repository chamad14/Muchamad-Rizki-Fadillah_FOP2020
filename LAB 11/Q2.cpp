#include <iostream>
using namespace std;
 
double ave(int a[], int n) //average functions and sum
{
    // Find sum of array element
    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
  cout << "sum is " <<  sum << endl;
  cout << "with average : " << endl;
    return (double)sum/n;
}
 

int main()
{
    int arr[] = {4, 7, 12, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << ave(arr, n) << endl;
  
    return 0;
}