#include <iostream>

int main() {

    char unit;
    double userTemp, convertedTemp;

    std::cout << "Type F to enter in Fahrenheit or C to enter in Celcius:\n";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Fahrenheit:\n";
        std::cin >> userTemp;

        convertedTemp = (userTemp - 32.0) * (5.0/9.0);
        std::cout << convertedTemp << std::endl;
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Celcius:\n";
        std::cin >> userTemp;
        convertedTemp = (userTemp * ((9*1.0)/5) + 32);
        std::cout << convertedTemp << std::endl;
    }
    else {
        std::cout << "Invalid input\n";
    }


    return 0;
}