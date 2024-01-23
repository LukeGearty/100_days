#include <iostream>

int main() {

    int total, numOfStudents, currentNum;
    double average;
    bool isUserTyping = true;

    total = 0;
    numOfStudents = 0;
    std::cout << "Enter the grades, followed by the enter key. To exit, press -1" << std::endl;

    while (isUserTyping == true) {
        std::cin >> currentNum;
        if (currentNum == -1) {
            isUserTyping = false;
        }
        else {
            total = total + currentNum;
            numOfStudents++;
        }
    }

    average = (double)total / (double)numOfStudents;

    std::cout << "The class average is " << average << std::endl;

    return 0;
}