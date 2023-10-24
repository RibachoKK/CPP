#include <iostream>

int main() {
    int x, y;
    std::cout << "Does the point fall within the shaded area?" << std::endl;
    std::cout << "Enter x value: ";
    std::cin >> x;
    std::cout << "Enter y value: ";
    std::cin >> y;

    if (x >= 0 && x <= 3 && y >= 0 && y <= 1) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
