#include <iostream>

int main() {

    int num;
    int count = 1;

    std::cout << "Enter a positive integer: \n";
    std::cin >> num;

    while (count <= num) {
        if (num % count == 0) {
            std::cout << count << '\n';
        }
        count++;
    }

    return 0;
}