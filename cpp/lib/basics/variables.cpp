#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main ()
{
  cout << "Integers:\n";
  int a = 5;
  int b = 2;
  int result;
  a = a + 1;
  result = a - b;
  cout << result << endl;

  cout << "Strings:\n";
  string mystring = "This is a string";
  cout << mystring << endl;

  cout << "Constants:\n";
  double radius = 5.0;
  double circumference;
  circumference = 2 * pi * radius;
  cout << circumference;
  cout << newline;

  return 0;
}
