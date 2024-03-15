#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}
