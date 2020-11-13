#include <iostream> 
#include <string> 
using namespace std; 
  
// Function which return string by concatenating it. 
void repeat(string s, int n) 
{ 
    for (int i=1; i<=n;i++) {
       cout << s << i << endl;
    }
    
} 
  
// Driver code 
int main() 
{ 
    string inputS;
    int inputN;
    
    cout<< "Input String" << endl;
    cin >> inputS;
    cout<< "Input amount of times"<< endl;
    cin >> inputN;

    repeat(inputS,inputN);
    return 0; 
} 