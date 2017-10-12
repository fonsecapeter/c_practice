#include <iostream>
using namespace std;

int main ()
{
  int a, b=3;
  a = b;
  a+=2;
  b++;
  cout << "a: ";
  cout << a;
  cout << ", b: ";
  cout << b;
  cout << "\n";
  cout << "is a == b? ";
  cout << !(a != b);
  cout << "\n";
}
