#include <iostream>
using namespace std;

int main() {

    int inputNum, lineCount, asteriskCount, spaceCount;

    cout << "Enter a positive integer: \n";
    cin >> inputNum;

    //The lines will start at 2*n -1
    lineCount = 2*inputNum - 1;
    asteriskCount = lineCount;
    spaceCount = 0;

    //the first half
    while (asteriskCount >= 1) {
        //first print out the spaces
        for (int i = 0; i < spaceCount; i++) {
            cout << " ";
        }
        //then print out the asterisks
        for (int j = 1; j <= asteriskCount; j++) {
            cout << "*";
        }
        //cout the new line
        cout << endl;
        //asterisk count needs to go down by 2
        asteriskCount = asteriskCount - 2;
        //space count needs to go up by 1
        spaceCount = spaceCount + 1;
    }

    //the second half
    spaceCount = spaceCount - 2; 
    //the final line in the first half will have 1 asterisk, so next line needs to have 3 asterisks
    asteriskCount = 3;

    while (asteriskCount <= lineCount) {
        for (int i = 0; i < spaceCount; i++) {
            cout << " ";
        }
        for (int j = 1; j <= asteriskCount; j++) {
            cout << "*";
        }
        cout << endl;
        spaceCount = spaceCount - 1;
        asteriskCount = asteriskCount + 2;
    }

    return 0;
}