#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int originalNum = n;

    while (originalNum > 0) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int k = i; k < n; k++) {
            cout <<" ";

        }

        for (int m = i; m < n; m++) {
            cout << " ";
        }

        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << "*";
        }

        for (int k = 1; k < i; k++) {
            cout <<" ";
        }

        for (int m = 1; m < i; m++) {
            cout << " ";
        }

        for (int l = i; l <= n; l++) {
            cout << "*";
        }
        cout << endl;
    }

    originalNum--;
    }

    return 0;
}