/*
기본급여 50만원
판매가격의 12%

민수가 100만원 팔았따면 50 + 100*0.12 = 62
-1을 입력 시 종료되도록 
*/

#include <iostream>

int main(void) {
    double minWage = 50;
    double incentiveRatio = 0.12;
    double totalWage;
    int input;

    while(1) {
        std::cout << "Input The Amount Sold In Dollars.(-1 to End): ";
        std::cin >> input;
        if(input == -1) {
            break;
        } else {
            totalWage = minWage + (input * incentiveRatio);
            std::cout << "Total Wage Of This Month: $" << totalWage << std::endl;
        }
    }
    std::cout << "Terminate Program.\n";
    return 0;
}