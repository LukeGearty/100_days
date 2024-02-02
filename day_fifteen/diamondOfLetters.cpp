#include <iostream>
using namespace std;

/*
Make a hollowed-out diamond made up of in-order alphabet letters. 
An example is below when n=5.
*/

int main() {

    int userInput, spaceAmount;
    char currChar, lastChar;

    cout << "Please enter a positive integer up to 26:" << endl;
    cin >> userInput;

    currChar = 'a';
    lastChar = currChar + (userInput-1);

    for (int i = 0; i < userInput; i++) {
        //print out initial spaces to form the shape
        for (int j = i; j < userInput; j++) {
            cout << " ";
        }
        //print out the current letter
        cout << currChar;
        //print out the spaces of the second part
        for (int k = 1; k <=i; k++) {
            cout << " ";
        }
        for (int m = 1; m <= i; m++) {
            cout << " ";
        }
        //print out the char if it isn't a, meaning if i went above 0
        if (i > 0) {
            cout << currChar;
        }
        currChar++;
        cout << endl;
    }

    lastChar = lastChar - 1;
    spaceAmount = 2;

    //the second half of the diamond
    for (int i = 0; i < userInput-1; i++) {
        for (int j = 0; j < spaceAmount; j++) {
            cout << " ";
        }
        cout << lastChar;

        if (lastChar == 'a') {
            break;
        }
        else {
            for (int k = 0; k < userInput - spaceAmount; k++) {
                cout << " ";
            }
            for (int m = 0; m < userInput - spaceAmount; m++) {
                cout << " ";
            }
            cout << lastChar;
        }
        
        lastChar--;
        spaceAmount++;
        cout << endl;
    }

    cout << endl;

    return 0;
}