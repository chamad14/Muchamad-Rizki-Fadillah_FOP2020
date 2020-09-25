#include <iostream>
using namespace std;

int main() {

char op;
float num1, num2;

//enter the number
cout << "enter the numbers" <<endl;
cin >> num1 >> num2;

// enter the operation 
cout << "select operation +,-,*,/" << endl;
cin >> op;

// Switch statement begins 
    switch (op) { 
          
        // If user enter +  
        case '+': 
            cout << num1 + num2; 
            break; 
          
        // If user enter -  
        case '-': 
            cout << num1 - num2; 
            break; 
          
        // If user enter * 
        case '*': 
            cout << num1 * num2; 
            break; 
          
        // If user enter / 
        case '/': 
        if (num2 == 0) {
          cout << "undefined result" << endl;
        }
        else {
            cout << num1 / num2; 
        }
            break; 
        
        // If the operator is other than +, -, * or /,  
        default: 
            cout << "Error! operator is not correct"; 
            break; 
    } 
  
    return 0;  
} 
