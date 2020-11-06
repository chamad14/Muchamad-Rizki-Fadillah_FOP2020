#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Variable
  string myname;
  string fullname;
  string myage = "My age is 19 years old.";

  // Read File
  ifstream input; // Variable untuk Read File
  input.open("myname.txt");

  getline(input, myname, '\n');
  cout << myname;
  fullname = myname;

  input.close();

  // Write File
  ofstream output; // Variable untuk Write File
  output.open("myname.txt");

  output << fullname << endl << myage;

  output.close();

  cout << "DONE" << endl;
}