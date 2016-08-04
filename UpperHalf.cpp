//
//  UpperHalf.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 3/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
// Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array.
//  FOR THIS METHOD I HAD TO USE THE HELP OF THE INTERNET TO UNDERSTAND THAT K NEEDED TO BE THERE

#include <iostream>
using namespace std;

int main() {
    int const row = 4;
    int const column = 4;
    int arr[row][column];
    srand(time(0));
    int i, j, k = 0;
    
    //Prints out full matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    //Should Print out upper half of matrix
    //9 5 7 9 arr[0][0], arr[0][1], arr[0][2], arr[0][3]
//    6 4 7 arr[1][0], arr[1][1], arr[1][2]
//    4 6
//    1
    
    for (i = 0; i < row; i++) {
        for (j = k; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        k = k + 1;
    }
    
    cout << endl;
    
    
}
