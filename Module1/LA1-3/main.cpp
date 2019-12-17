#include <iostream>
#include "my_functions.h"




// Main Function
int main()
{
    int n1=5, n2=10;

    std::cout<<"The sum of "<<n1<<" and "<<n2<<" is "<< Sum(n1,n2)<<std::endl;

    std::cout<<"Number before UpdateStep() "<<n1<<std::endl;
    UpdateStep(n1);
    std::cout<<"Number after UpdateStep() "<<n1<<std::endl;

  return 0;
}
