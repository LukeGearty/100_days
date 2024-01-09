#include <iostream>

int main() 
{
    int num;

    std::cout << "Enter a num: \n";
    std::cin >> num;

    if (num % 2 == 0) 
    {
        std::cout << "It is even!\n";
    } 
    else 
    {
        std::cout << "It is odd!\n";
    }

    return 0;
}