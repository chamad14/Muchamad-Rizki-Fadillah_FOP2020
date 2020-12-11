#include <iostream> 
using namespace std; 
  
int Linsearch(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 


int main() 
{ 
    int arr[] = {1, 4, 7, 2 , 6 , 3 , 5 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x;
    cout << "enter integer from 1-7" << endl;
    cin >> x;
  
    int index = Linsearch(arr, n, x); 
    if (index == -1) 
        cout << "not found"; 
    else
        cout << "Element found at position " << index; 
  
    return 0; 
} 