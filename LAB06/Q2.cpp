#include <iostream>
using namespace std;

int main() {
// declare the variables 
    int j, i, n;

//prompt for the user to input the number
    cout << "Input the number : ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
                cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}