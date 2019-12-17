
/**
* @file mysquares.cpp
* @author your name (you@domain.com)
* @brief Print multiple numbers squares
* @version 0.1
* @date 2019-12-16
*
* @copyright Copyright (c) 2019
*
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int kMaxCount = 5;

int main(){

//    int number = 81;
//
//    cout    << "\nNUMBER   SQUARE ROOT"
//    << "\n------   -----------\n";
//    cout<< setiosflags(ios::showpoint);
//    for(int count=1;count<kMaxCount;++count){
//        cout <<setw(3)<< count << setw(15) << sqrt(count) <<endl;
//    }
//    cout<< endl;


    int number;
    cout<<"Enter a value to print multiplication tables: ";
    cin>>number;
    for(int num1 = 1; num1 <=number; ++num1){
        for(int num2 = 1; num2<=10; ++num2){
            cout<<setw(4)<<num1*num2;
        }
        cout<<endl;
    }

    return 0;
}
