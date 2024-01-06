#include <iostream>

int main() {

    std::string name;

    std::cout << "Happy birthday! What is your name?: \n";
    std::getline(std::cin, name);

    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << "!\n";
    std::cout << "Happy birthday to you!\n";


    return 0;
}