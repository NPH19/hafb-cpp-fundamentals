/**
 * @file age.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2019-12-16
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>
using namespace std;

int int_global = 1000; //global variable

int main(){

    int int_global = 2000;

    // :: scope operator
    cout<<"Global "<<::int_global<< endl;
    cout<<"Local "<<int_global<< endl;



    return 0;
}
