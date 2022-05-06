/*
 * Input 5 numbers, Print Sum.
*/

#include <iostream>

int main(void) {
    int input;
    int sum;

    for(int i=0; i<5; i++) {
        std::cout << "No." << i << " Input: ";
        std::cin >> input;
        sum += input;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}