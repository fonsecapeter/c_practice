#include <iostream>
using namespace std;

int addition(int a, int b) {
  return a + b;
}

void puts(string msg) {
  cout << msg << '\n';
}

void implicit_mutate(int& a) {
  a *= 2;
}

int main() {
  int my_result = addition(5, 3);
  cout << "My result is: " << my_result;
  puts("\n---------------");
  int my_num = 8;
  implicit_mutate(my_num);
  cout << "My num is: " << my_num;
  cout << '\n';
  return 0;
}
