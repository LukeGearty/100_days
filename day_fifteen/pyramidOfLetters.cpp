#include <iostream>
using namespace std;

int main() {

    char inLetter, firstChar;
    int sizeOfHill;

    cout << "enter a lower case letter: " << endl;
    cin >> inLetter;

    firstChar = 'a';
    sizeOfHill = (int)inLetter - firstChar + 1;

    for (int i = 0; i < sizeOfHill; i++) {
        for (int j = i; j < sizeOfHill; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << firstChar;
        }
        for (int m = 0; m < i; m++) {
            cout << firstChar;
        }

        if (i % 2 == 0) {
            firstChar = firstChar - 31;
        }
        else {
            firstChar = firstChar + 33;
        }
        
        cout << endl;
    }

    return 0;
}