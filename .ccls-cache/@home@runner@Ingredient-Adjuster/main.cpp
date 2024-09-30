#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  const float SUGAR = 1.5;
  const float BUTTER = 1;
  const float FLOUR = 2.75;
  int count; 
  
  cout << "How many cookies would you like to bake?\n\n";
  cin >> count;
  
  float countChange = static_cast<float>(count) / 48;

  cout << "\nCookie Recipe\n" << "--------------------\n";
  cout << setprecision(3);
  cout << SUGAR * countChange << " cups of sugar\n\n";
  cout << BUTTER * countChange << " cups of butter\n\n";
  cout << FLOUR * countChange << " cups of flour";
}