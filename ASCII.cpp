//
//  ASCII.cpp
//  MultiDimensionalArrays
//
//  Created by Sharmyn Kayani on 5/08/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  You'll use a single array, and ummm you'll use type casting and ummm if the word is Apple, you can convert it to Alpha with getting the first character of Apple which is 'A' and subtracting it by 65. As the ascii code of A is 65. That way you get 0. And on the zero. Index of your array you would have Alpha. If it would have been Batman, then B minus 65 gives you 1 as B is 66. So on the index number 1 you have Bravo. And there you have your solution. I hope it helped
//
#include <iostream>
using namespace std;

int main() {
    //word is an array
    string word;
    int spare = 0;
    
    cout << "Please enter a word (capitals only): ";
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        spare = (int)word[i] - 65;
        switch(spare){
            case 0:
                cout << "Alpha ";
                continue;
            case 1:
                cout << "Bravo ";
                continue;
            case 2:
                cout << "Charlie ";
                continue;
            case 3:
                cout << "Delta ";
                continue;
            case 4:
                cout << "Echo ";
                continue;
            case 5:
                cout << "Foxtrot ";
                continue;
            case 6:
                cout << "Golf ";
                continue;
            case 7:
                cout << "Hotel ";
                continue;
            case 8:
                cout << "India ";
                continue;
            case 9:
                cout << "Juliet ";
                continue;
            case 10:
                cout << "Kilo ";
                continue;
            case 11:
                cout << "Lima ";
                continue;
            case 12:
                cout << "Mike ";
                continue;
            case 13:
                cout << "November ";
                continue;
            case 14:
                cout << "Oscar ";
                continue;
            case 15:
                cout << "Papa ";
                continue;
            case 16:
                cout << "Quebec ";
                continue;
            case 17:
                cout << "Romeo ";
                continue;
            case 18:
                cout << "Sierra ";
                continue;
            case 19:
                cout << "Tango ";
                continue;
            case 20:
                cout << "Uniform ";
                continue;
            case 21:
                cout << "Victor ";
                continue;
            case 22:
                cout << "Whiskey ";
                continue;
            case 23:
                cout << "X-ray ";
                continue;
            case 24:
                cout << "Yankee ";
                continue;
            case 25:
                cout << "Zulu ";
                continue;
                
        }
        
    }
    
    cout << endl;

    
    return 0;
    
    
}
