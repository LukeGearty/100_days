#include <iostream>

int main() 
{
    int minutes, seconds;

    std::cout << "Enter the time, in minutes: \n";
    std::cin >> minutes;

    seconds = minutes * 60;

    std::cout << "You have " << seconds << "seconds\n";

    return 0;
}