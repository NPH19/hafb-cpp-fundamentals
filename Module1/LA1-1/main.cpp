#include <iostream>
using namespace std;

int main(){

    int age;

    std::cout<< "I can code" <<std::endl;
    cout<< "Another line under namespace std" << endl;
    cout << "Wildcats"<<" "<<"WSU "<<"Ogden"<<endl;
    
    cout << "Enter your age: ";
    cin >> age; //cin for user input

    cout<< "I am "<< age << " years old."<<endl;

    // get the size of the variable
    cout<< "the size of an int is " << sizeof(int)<< " bytes on this system." <<endl;
    cout<< "Min INteger value: " << INT64_MIN << "bytes. " << "Max INtegers value: "
        << INT64_MAX << " bytes." << endl;


    return 0;
}