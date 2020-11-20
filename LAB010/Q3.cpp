#include <iostream>
using namespace std;

int sumDigits(int num1) //function to sum the integers
{
  int sum = 0;
  while (num1 != 0) 
	  {
      sum += num1 % 10;
      num1 /= 10;
    }
      return sum;
}
 
int main() // main function
{
	int num1,sum,n;
	sum=0;

  cout << "Compute the sum of the digits of an integer: " << endl;

	cout << "Input any number: ";
	cin >> num1;
	n=num1;
  
	cout<<"The sum of the digits of the number "<<n<<" is: " << sumDigits(num1) <<endl; //invoking the function
	}