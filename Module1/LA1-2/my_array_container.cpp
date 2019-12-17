
/**
 * @file my_array_container.cpp
 * @author your name (you@domain.com)
 * @brief Learn c++ array container
 * @version 0.1
 * @date 2019-12-16
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
using namespace std;


int main(){

    // to create an array from library:
    // array<type, numOfElements> name
    array<double, 5> grades = {34,23,89.4,7.32,89.2};


    cout << "Size of array: " << grades.size() << endl;
    cout << "Is the array empty? " << grades.empty() << endl;

//    for(int index = 0; index < grades.size(); ++index){
//        cout << grades[index] << endl;
//    }


    for(auto grade : grades){
        cout << grade << endl;
    }




//    int maxNum = 5;
//    // Array notation: type, name[elements]
//    int grades[5];
//
//    //    for(int i=0;i< maxNum;++i){
//    //        cout<<"enter "<<i+1<<"grade: "<<endl;
//    //        cin>>grades[i];
//    //    }
//
//    int rowLimit = 3;
//    int colLimit = 4;
//    // 2D array: type name[row][col]
//    int bi_array[3][4] = {
//        {1,2,3,4},
//        {5,6,7,8},
//        {9,10,11,12}};
//
//    for(int row=0;row<rowLimit;++row){
//        for(int col=0;col<colLimit;++col){
//            cout<<"Array Element at ["<<row<<"]["<<col<<"] = "<<bi_array[row][col]<<endl;
//        }
//    }



    return 0;
}
