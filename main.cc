#include <iostream>
#include "calculator.h"

int main() {
  int x;
  int y;
  std::string action;
  // get user Input
  std::cout << "Enter the first number: ";
  std::cin >> x;
  std::cout << "\nEnter the second number: ";
  std::cin >> y;
  while(true){
  std::cout<< "\nWould you like these numbers to 'add', 'subtract', 'multiply', or 'divide'? ";
  std::cin >> action;
  if(action == "add" || action == "subtract" || action == "multiply" || action == "divide"){
  calculator(x, y, action);
    break;
    }
    
    }
  }
