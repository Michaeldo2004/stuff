#include <iostream>



//functions for division
double divide(int&x, int& y){
  return std::fixed << std::setprecision(2) << (double) (x/y);
}

//calculates, or asks again if invalid response
void calculator(int& x, int& y, std::string& action){
  bool rightInput = false;
  while(!rightInput){
    int input =0;
    if(action == "add"){             //Addition
      std::cout<< "\nIf you add these numbers, you will get " << x+y << ".\n";
      rightInput=true;
    }else if(action == "subtract"){  //Subtraction
      bool subTrue = false;
      while(!subTrue){
        std::cout << "\nWhich number will be the minuend? ";
        std::cin >> input;
        if(input == x){
          std::cout<< "\nIf you subtract these numbers, you will get "<< x-y << ".\n";
          subTrue=true;
          rightInput=true;
        }else if(input == y){
          std::cout<< "\nIf you subtract these numbers, you will get "<< y-x << ".\n";
          subTrue=true;
          rightInput=true;
        }
        std::cout<< "\nInvalid input.\n";
      }
    }else if(action == "multiply"){  //Multiplication
      std::cout << "\nIf you multiply these numbers, you will get " << x*y << ".\n";
      rightInput=true;
    }else if(action == "divide"){    //Division
      bool divTrue = false;
      while(!divTrue){
        std::cout << "\nWhich number will be the dividend? ";
        std::cin >> input;
        if(input == x){
          std::cout<< "\nIf you divide these numbers, you will get "<<divide(x,y) << ".\n";
          divTrue=true;
          rightInput=true;
        }else if(input == y){
          std::cout<< "\nIf you subtract these numbers, you will get "<< divide(y,x) << ".\n";
          divTrue=true;
          rightInput=true;
        }
        std::cout<< "\nInvalid input.\n";
      }
    }
    std::cout<< "Your input is invalid, try again.\nWould you like "
             << "these numbers to 'add', 'subtract', 'multiply', or 'divide'? ";
    std::cin >> action;
    calculator(x, y , action);
    
    }
    }
 // multiplies/adds/subtracts or divides 2 outputs together
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
}
