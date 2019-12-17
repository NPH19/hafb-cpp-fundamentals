
/**
 * @file case.cpp
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

    char code;
    cout<<"Enter specification code: ";
    cin>>code;

    switch (code) {
        case 'S' | 's':
            cout<<"The item is space exploration grade."<<endl;
            break;

        case 'M':
            cout<<"The item is space military grade."<<endl;
            break;

        default:
            cout<<"Invalid code.";
            break;
    }



    return 0;
}
