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

int main(){

    int age;

    cout << "Enter you age: ";
    cin >> age;

    if(age<18){
        cout<<"You must go to school!";
    }else if(age >= 18 && age < 21){
        cout<<"You can vote!";
    }else if(age >= 21 && age < 65){
        cout<<"You can drink alcohol!";
    }else{
        cout<<"You can retire!";
    }

    cout<<endl<<endl;

    return 0;
}
