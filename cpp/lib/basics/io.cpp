#include <iostream>
#include <string>  // for getline
#include <sstream>  // for string -> int
using namespace std;

int main ()
{
  // // crummy, cin is not preferred, will end on any whitespace
  // int i;
  // cout << "Please enter an int: ";
  // cin >> i;
  // cout << "Your int is: " << i;
  // cout << " and its double is " << i * 2 << ".\n\n";

  string mystr;
  string numstr;
  float price = 0;
  int quantity = 0;

  // :D getline behaves better, always use ENTER to end input
  cout << "What's your name? ";
  getline(cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What's your favorite team? ";
  getline(cin, mystr);  // just overwrite existing var
  cout << "I like " << mystr << " too!\n";


  // If you want to convert input, use streams
  cout << "Enter price: ";
  getline(cin, numstr);
  stringstream(numstr) >> price;
  cout << "Enter quantity: ";
  getline(cin, numstr);
  stringstream(numstr) >> quantity;
  cout << "Total price: " << price * quantity << endl;
  return 0;
}
