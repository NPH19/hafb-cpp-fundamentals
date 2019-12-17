#include "factor.h"
#include <iostream>




void FactorMod3(){

    unsigned int count = 0;

    for (unsigned int x = 1; x <= 30; ++x){

        if (x % 3 == 0){
            count++;
        }
    }
    std::cout<<count<<std::endl;
}
