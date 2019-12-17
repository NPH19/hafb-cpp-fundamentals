
/**
 * @file my_array.cpp
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


int main(){
    int maxNum = 5;
    // Array notation: type, name[elements]
    int grades[5];

//    for(int i=0;i< maxNum;++i){
//        cout<<"enter "<<i+1<<"grade: "<<endl;
//        cin>>grades[i];
//    }

    int rowLimit = 3;
    int colLimit = 4;
    // 2D array: type name[row][col]
    int bi_array[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}};

    for(int row=0;row<rowLimit;++row){
        for(int col=0;col<colLimit;++col){
            cout<<"Array Element at ["<<row<<"]["<<col<<"] = "<<bi_array[row][col]<<endl;
        }
    }



    return 0;
}

