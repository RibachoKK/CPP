#include <iostream>

int main() {
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    if (value >= 0 && value < 10 || (value * 2) < 20 && (value - 2) > -2 || (value - 1) > 1 && (value / 2) < 10 || value == 111) {
        std::cout << "THAT'S TRUE :)" << std::endl;
    } else {
        std::cout << "THAT'S NOT TRUE :(" << std::endl;
    }
    return 0;
}