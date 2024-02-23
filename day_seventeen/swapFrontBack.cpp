#include <iostream>
using namespace std;

void swapFrontBack(int arr[], int size);

int main() {

    int testArrayOne[5] = {0, 54, 97, -10, 52};
    int testArrayTwo[] = {};
    int testArrayThree[10] = {-100, -10, 100, 50, 45, 32, 7, 92, 18, 2003};

    int testArraySize1 = sizeof(testArrayOne)/sizeof(testArrayOne[0]);
    int testArraySize2 = sizeof(testArrayTwo)/sizeof(testArrayTwo[0]);
    int testArraySize3 = sizeof(testArrayThree)/sizeof(testArrayThree[0]);

    cout << "**************** TEST ONE ****************" << endl;

    cout << "Before Function: " << endl;
    for (int i = 0; i < testArraySize1; i++) {
        cout << testArrayOne[i] << " ";
    }
    cout << endl;
    swapFrontBack(testArrayOne, testArraySize1);
    cout << "After Function: " << endl;
    for (int i = 0; i < testArraySize1; i++) {
        cout << testArrayOne[i] << " ";
    }
    cout << endl;

    cout << "**************** TEST TWO ****************" << endl;
    swapFrontBack(testArrayTwo, testArraySize2);
    cout << endl;

    cout << "**************** TEST THREE ****************" << endl;

    cout << "Before Function: " << endl;
    for (int i = 0; i < testArraySize3; i++) {
        cout << testArrayThree[i] << " ";
    }
    cout << endl;
    swapFrontBack(testArrayThree, testArraySize3);
    cout << "After Function: " << endl;
    for (int i = 0; i < testArraySize3; i++) {
        cout << testArrayThree[i] << " ";
    }
    cout << endl;

    return 0;
}

void swapFrontBack(int arr[], int size) {

    if (size == 0) {
        cout << "Empty Array\n";
    }
    else {
        int temp = arr[0];
        arr[0] = arr[size -1];
        arr[size -1] = temp;
    }
}