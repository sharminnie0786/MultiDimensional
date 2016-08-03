//
//  SquareMatrix.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 3/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
//  [Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]

#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    
    const int row = 9;
    const int column = 9;
    int arr[row][column];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    int newRow = (row/2 + 1) - 1;
    
    cout << "The middle column is: " << endl;
    for (int i = 0; i < column; i++) {
        cout << arr[newRow][i] << " ";
    }
    cout << endl;
    
    
    return 0;
}
