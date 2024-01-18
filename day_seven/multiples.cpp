#include <iostream>

int main() {
    int num = 1;

    do {
        if (num % 3 == 0 && num % 5 == 0) {
            std::cout << num << std::endl;
        }
        num = num + 1;
    } while (num < 1000);
    return 0;
}