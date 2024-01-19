#include <iostream>
//Not really meant to handle big integers

int main() {
    int firstNum = 0;
    int secondNum = 1;
    int userChoice;

    std::cout << "How many elements of the Fibonacci sequence do you want me to print out?\n";
    std::cin >> userChoice;

    if (userChoice == 0) {
        std::cout << "Thank you for wasting my time!" << '\n';
    } 
    else if (userChoice == 1) {
        std::cout << firstNum << '\n';
    } 
    else if (userChoice == 2) {
        std::cout << firstNum << '\n' << secondNum << '\n';
    } 
    else {
        int count = 2;
        int temp;
        std::cout << firstNum << '\n' << secondNum << '\n';
        while (count < userChoice) {
            std::cout << firstNum + secondNum << '\n';
            temp = secondNum;
            secondNum = firstNum + secondNum;
            firstNum = temp;
            count++;
        }
    }
    return 0;
}