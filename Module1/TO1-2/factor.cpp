#include "factor.h"
#include <iostream>




void FactorMod3(){

    unsigned int count = 0;

    for (unsigned int x = 1; x <= 30; ++x){

        if (x % 3 == 0){
            count++;
        }
    }
    std::cout<<"30 is divisible by 3: "<<count<<" times"<<std::endl;
}

void FactorModX(int mod_number){
    unsigned int count = 0;

    for (unsigned int x = 1; x <= 30; ++x){

        if (x % mod_number == 0){
            count++;
        }
    }
    std::cout<<"30 is divisible by "<<mod_number<<": "<<count<<" times"<<std::endl;

}

void FactorModXRange(int mod_number, int max_range){
    unsigned int count = 0;

    for (unsigned int x = 1; x <= max_range; ++x){

        if (x % mod_number == 0){
            count++;
        }
    }
    std::cout<<max_range<<" is divisible by "<<mod_number<<": "<<count<<" times"<<std::endl;

}
