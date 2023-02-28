#include <iostream>
#include <iomanip>

//functions for division
double divide(int &x, int &y){
  return (double) (x/y);
}

void calculator(int& x, int& y, std::string& action){
  while(true){
    int input = 0;
    if(action == "add"){             //Addition
      std::cout << "\nIf you add these numbers, you will get " 
                << x+y << ".\n";
      break;
    }else if(action == "subtract"){  //Subtraction
      while(true){
        std::cout << "\nWhich number will be the minuend? ";
        std::cin >> input;
        if(input == x){
          std::cout << "\nIf you subtract these numbers, you will get "
                    << x-y << ".\n";
          break;
        }else if(input == y){
          std::cout << "\nIf you subtract these numbers, you will get "
                    << y-x << ".\n";;
          break;
        } else{
        std::cout<< "\nInvalid input.\n";
          }
        break;
      }
    }else if(action == "multiply"){  //Multiplication
      std::cout << "\nIf you multiply these numbers, you will get " << x*y << ".\n";
      break;
    }else if(action == "divide"){    //Division
      while(true){
        std::cout << "\nWhich number will be the dividend? ";
        std::cin >> input;
        if(input == x){
          std::cout<< "\nIf you divide these numbers, you will get "<<divide(x,y) << ".\n";
          break;
        }else if(input == y){
          std::cout<< "\nIf you subtract these numbers, you will get "<< divide(y,x) << ".\n";
          break;
        }else{
        std::cout<< "\nInvalid input.\n";
          }
        break;
      }
    }
    std::cout<< "Your input is invalid, try again.\nWould you like "
             << "these numbers to 'add', 'subtract', 'multiply', or 'divide'? ";
    std::cin >> action;
    calculator(x, y , action);
    }
    }
