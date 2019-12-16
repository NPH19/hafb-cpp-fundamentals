//
//  bmi.cpp
//  
//
//  Created by Nick Hudson on 12/16/19.
//

#include <iostream>
using namespace std;

const float kMeterToInches = 39.3701;
const float kKgTolbs = 2.20462;
const float kBMIimperial = 703;

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
    cout<< "Your bmi(metric) is: "<<bmi<<endl;

    float impWeight, impHeight, impBMI;

    impWeight = weight*kKgTolbs; // 1 kg = 2.204 lbs
    impHeight = height*kMeterToInches; // 1 m = 39.37 inches

    impBMI = impWeight*kBMIimperial/(impHeight*impHeight);

    cout<< "Your bmi(metric) is: "<<impBMI<<endl;

    return 0;
}
