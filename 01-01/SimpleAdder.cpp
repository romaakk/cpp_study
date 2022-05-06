#include <iostream>

int main(void) {
    int val1;
    std::cout << "First Number Input: ";
    std::cin >> val1;

    int val2;
    std::cout << "Second Nubmer Input: ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "Added Result: " << result << std::endl;

    std::string str;
    std::cout << "String Input: ";
    std::cin >> str;
    std::cout << "Your String: " << str << std::endl;

    return 0;
}