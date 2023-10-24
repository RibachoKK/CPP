#include <iostream>
#include <iomanip>

int main() {
    float a = 2.3, b = 2.3, c = 2.123456, d = 2.123456, e = 2.123456;

    std::cout << a << std::endl;
    std::cout << std::fixed << std::setprecision(2) << b << std::endl;
    std::cout << std::fixed << std::setprecision(6) << c << std::endl;
    std::cout << std::fixed << std::setprecision(2) << d << std::endl;
    std::cout << std::fixed << std::setprecision(0) << e << std::endl;

    return 0;
}
