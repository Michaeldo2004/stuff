#include <iostream>
#include "calculator.cc"

int main() {
  int x;
  int y;
  std::string action;
  // get user Input
  std::cout << "Enter the first number: ";
  std::cin >> x;
  std::cout << "\nEnter the second number: ";
  std::cin >> y;
  std::cout<< "\nWould you like these numbers to 'add', 'subtract', 'multiply', or 'divide'? ";
  std::cin >> action;
  calculator(x, y, action);
  }
