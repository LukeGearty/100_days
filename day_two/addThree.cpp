#include <iostream>

int main() {

    int num1, num2, num3, result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    result = num1 + num2 + num3;
    std::cout << num1 << " + " << num2 << " + " << num3 << " = " << result << std::endl; 


    return 0;
}