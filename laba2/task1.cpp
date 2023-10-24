#include <iostream>
#include <cmath>

double calculate(double x, double a, double b, double c) {
    if (b <= 5) {
        return pow(4 - x, a * b);
    } else if (b >= c) {
        return 0.25 + b * c;
    }
    return 0.0;
}

int main() {
    double result1 = calculate(2.0, 1.0, 3.0, 6.0);
    double result2 = calculate(5.0, 2.0, 6.0, 4.0);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}
