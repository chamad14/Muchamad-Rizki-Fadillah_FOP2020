#include <iostream> 
using namespace std; 
void elemenpertama(int arr[], int n); //function prototype

int main() 
{ 
    int mylist[] =  { 4, 7, 12, 5, 2 }; 
    int n = sizeof(mylist) / sizeof(mylist[0]); 
    elemenpertama(mylist, n); 

    return 0; 
} 

void elemenpertama(int arr[], int n) 
{ 
    int a = arr[0];
    int b = arr[n - 1]; 
    int c = arr[3];
    cout << "elemen pertama  : " << a << endl;
    cout <<"elemen ke empat : " << c << endl; 
    cout << "elemen terakhir : " << b << endl;
} 
  