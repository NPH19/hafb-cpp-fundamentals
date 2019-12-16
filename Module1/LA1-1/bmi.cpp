//
//  bmi.cpp
//  
//
//  Created by Nick Hudson on 12/16/19.
//

#include <iostream>
using namespace std;

int main(){
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight, height, bmi;

    cout<< "Enter your weight in kg: ";
    cin >> weight;

    cout<< "Enter your height in m: ";
    cin >> height;

    bmi = weight/(height*height);

    //cout<< "I weigh "<< weight <<" kg, and I am " << height << " meters tall."<<endl;
    cout<< "Your bmi is: "<<bmi<<endl;



    return 0;
}
