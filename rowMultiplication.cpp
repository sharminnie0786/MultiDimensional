//
//  rowMultiplication.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 4/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a user-defined function in C++ to display the multiplication of row element of two-dimensional array A[4][6] containing integer.

#include <iostream>
using namespace std;

int allDone = 1;

//int matrixMultiplication(int rowMultiply) {
//    int arr[rowMultiply][6];
//    
//    for (int i = 1; i < 7; i++) {
//        allDone *= arr[rowMultiply][i];
//    }
//    
//    return allDone;
//}

int main() {
    
    int rowMultiply = 0;
    
    srand(time(0));
    int  row = 4;
    int const column = 6;
    int arr[row][column];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "What row would you like to see the multiplication of? (1-4)";
    cin >> rowMultiply;
    
//    matrixMultiplication(rowMultiply);
    
    row = rowMultiply - 1;
    
    for (int i = 0; i < column; i++) {
        if (arr[row][i] == 0) {
            arr[row][i] = 1;
        } else {
            allDone *= arr[row][i];
        }
    }
    
    cout << "The multplication of Row " << rowMultiply << " is: " << allDone;
    
    cout << endl;
    
    return 0;
}
