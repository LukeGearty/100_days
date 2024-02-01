#include <iostream>

int main() {
    //Get the user number
    int originalNum;
    //create a duplicate to iterate over it
    int userInput;
    //declare variable for the reverse;
    int reverseNum;
    //declare variable for the current digit
    int currDigit;

    std::cout << "Enter a positive integer: ";
    std::cin >> originalNum;
    userInput = originalNum;

    reverseNum = 0;

    //iterate over userInput and check for each digit
    while (userInput > 0) {
        currDigit = userInput % 10;
        reverseNum = (reverseNum * 10) + currDigit;
        userInput = userInput / 10;
    }

    if (reverseNum == originalNum) {
        std::cout << originalNum << " is a palindrome\n";
    } 
    else {
        std::cout << originalNum << " is not a palindrome\n";
    }

    return 0;
}