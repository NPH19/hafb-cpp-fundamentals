//
//  my_functions.cpp
//
//
//  Created by Nick Hudson on 12/17/19.
//

#include "my_functions.h"
#include <iostream>


int Sum(int num1, int num2){
    return num1+num2;
}

void UpdateStep(int& step){
  std::cout << "Current step: " << step << std::endl;
  step += 1;
  std::cout << "New step: " << step << std::endl;

}
