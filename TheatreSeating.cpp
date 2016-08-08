//
//  TheatreSeating.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 2/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  30 columns, 15 rows
//

#include <iostream>
using namespace std;

char answer;
int row, column;
int tickets = 0;
float rowPrice = 10.00;
float ticketPrice = 10.00;
char seats[15][30];
bool ticketYes = true;

//Initialisng seating arrangement
void seatingArrangement(){
    
    cout << "Current Seating Arrangement is: " << endl;
    cout << "       ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 15; i++) {
        if (i > 8) {
            cout << "Row " << i + 1 << " ";
        } else {
            cout << "Row " << i + 1 << "  ";
        }
        for (int j = 0; j < 30; j++) {
            seats[i][j] = '*';
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

//Ticket Sales and purchased
//First row is 10$ and each row goes up by 1.50$
void ticketSales() {
    
    cout << endl;
    
    cout << "Hi! There are 30 Rows. Which Row would you like to look at the prices for? ";
    cin >> row;
    
    for (int i = 1; i <= row; i++) {
        rowPrice = rowPrice + 1.5;
    }
    
    cout << "Each ticket in Row " << row << " is $" << rowPrice << endl;
    cout << "Would you like to buy any tickets from Row " << row << " (Y/N) ";
    cin >> answer;
}

//Buying Tickets
void buyingTickets(int tickets) {
    ticketPrice = rowPrice * tickets;
    cout << "Your total is: $" << ticketPrice << endl;
}

//Show Seating Arrangement
void showArrangement() {
    
    cout << "Would you like to choose your seats? (Y/N): " << answer << endl;
    if (answer == 'Y' || answer == 'y') {
        while (tickets != 0) {
            cout << "Please choose seats from Row " << row << "." <<
            "(0 - 30)" << endl;
            cin >> column;
            //Makes chosen seats into '#'
            seats[row][column] = '#';
            tickets = tickets - 1;
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << j << " ";
                }
            }
            cout << endl;
            for (int i = 0; i < 15; i++) {
                if (i > 8) {
                    cout << "Row " << i + 1 << " ";
                } else {
                    cout << "Row " << i + 1 << "  ";
                }
                for (int j = 0; j < 30; j++) {
                    cout << seats[i][j] << " ";
                }
                cout << endl;
            }
            
        }
        
        cout << "New Seating Arrangement is: " << endl;
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 30; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }
        
        
        } else if (answer == 'N' || answer == 'n') {
            cout << "Thankyou! Hope to see you soon." << endl;
        } else {
            cout << "Answer not valid" << endl;
    }
    
}

//Main Functions
int main() {
//    int seats[15][30];
    
    while (ticketYes == true) {
    seatingArrangement();
    ticketSales();
    
    if (answer == 'Y' || answer == 'y') {
        cout << "How many tickets would you like to buy? ";
        cin >> tickets;
        buyingTickets(tickets);
    } else if (answer == 'N' || answer == 'n') {
        cout << "Thankyou! Hope to see you soon." << endl;
        ticketYes = false;
        return 0;
    } else {
        cout << "Answer not valid" << endl;
    }

    showArrangement();
        
    }
    
    return 0;
}

/*
 
 
 
 */
