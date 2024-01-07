#include <iostream>

int main() {

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number > 0) {
        std::cout << "Going in " << number << '\n';
        number--;
    }

    if (number == 0) {
        std::cout << "Explode!\n";
    }

    return 0;
}