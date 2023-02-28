#include <iostream>
#include <iomanip>


void calculator(int& x, int& y, std::string& action){
    int input = 0;
    if(action == "add"){             //Addition
      std::cout << "\nIf you add these numbers, you will get " 
                << x+y << ".\n";
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
      }
    }else if(action == "multiply"){  //Multiplication
      std::cout << "\nIf you multiply these numbers, you will get " << x*y << ".\n";
    }else if(action == "divide"){    //Division
      while(true){
        std::cout << "\nWhich number will be the dividend? ";
        std::cin >> input;
        if(input == x){
          std::cout<< "\nIf you divide these numbers, you will get "<< (double) (x/y) << ".\n";
          break;
        }else if(input == y){
          std::cout<< "\nIf you subtract these numbers, you will get "<< (double) (y/x) << ".\n";
          break;
        }else{
        std::cout<< "\nInvalid input.\n";
          }
      }
    }
    }
    
