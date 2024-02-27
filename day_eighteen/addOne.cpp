#include <iostream>
using namespace std;

void addOne(int *ptrNum);
int main() {
    int x;
    int *ptrX = &x;
    cout << "Enter an integer: ";
    cin >> x;

    addOne(ptrX);
    cout << "Your new number is " << x;
    cout << endl;
    return 0;
}

void addOne(int *ptrNum) {
    *ptrNum = *ptrNum + 1;
}