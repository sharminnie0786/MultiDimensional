//
//  TheatreSeating.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 2/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  30 columns, 15 rows
// Notes: I am doing this question from the textbook questions you sent me. So far I have decided on what functions 
// I will create and use. I am getting an error on line 40 (Thread 1: SIGNAL SIGBRT) and it does run successfully
// But it stops at that function and doesn't proceed to the next function which is ticketSales. 
// Why is this? Am i using the functions wrong?

#include <iostream>
using namespace std;

//Initialisng seating arrangement
void seatingArrangement() {
    char seats[15][30];
    
    cout << "       ";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= 15; i++) {
        if (i >= 10) {
            cout << "Row " << i << " ";
        } else {
            cout << "Row " << i << "  ";
        }
        
        for (int j = 1; j <= 30; j++) {
            seats[i][j] = '*';
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

//Ticket Sales and purchased
//First row is 10$ and each row goes up by 1.50$
void ticketSales() {
    int row = 0;
    float rowPrice = 10;
    
    cout << "Hi! There are 30 Rows. Which Row would you like to look at the prices for? ";
    cin >> row;
    
    for (int i = 1; i <= row; i++) {
        rowPrice = rowPrice * 1.5;
    }
    
    cout << "Row " << row << " price is $" << rowPrice << endl;
}

//Show Seating Arrangement
void showArrangement() {
    
}

//

//Main Functions
int main() {
//    int seats[15][30];
    seatingArrangement();
    ticketSales();
}
