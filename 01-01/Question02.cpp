#include <iostream>

int main(void) {
    std::string name;
    std::string phoneNumber;
    
    std::cout << "Input Name: ";
    std::cin >> name;

    std::cout << "Input PhoneNumber: ";
    std::cin >> phoneNumber;

    std::cout << "Your Name Is " << name << std::endl;
    std::cout << "Your PhoneNumber Is " << phoneNumber << std::endl;

    return 0;
}