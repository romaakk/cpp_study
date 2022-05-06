#include <iostream>

int main(void) {
    char name[100];
    char language[100];
    
    std::cout << "What Is Your Name? : ";
    std::cin >> name;

    std::cout << "What Is Your Favorite Programming Language? : ";
    std::cin >> language;

    std::cout << "My Name Is " << name << ".\n";
    std::cout << "My Favorite Language Is " << language << ".\n";
    
    return 0;
}

