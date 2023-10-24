#include <iostream>
#include <cmath>

double func(double x) {
    return pow(x, 0.25) - 8 * sin(x);
}

void tabulate(double a, double b, double h) {
    std::cout << "-------------------" << std::endl;
    std::cout << ":    X   :    Y    :" << std::endl;
    std::cout << "-------------------" << std::endl;

    for (double x = a; x <= b; x += h) {
        try {
            double y = func(x);
            std::cout << ": " << x << " : " << y << " :" << std::endl;
        } catch (const std::exception& e) {
            std::cout << ": " << x << " : Value is out of the function's domain :" << std::endl;
        }
    }

    std::cout << "-------------------" << std::endl;
}

int main() {
    double a, b, h;
    std::cout << "Enter values for a, b, h: ";
    std::cin >> a >> b >> h;

    tabulate(a, b, h);

    return 0;
}
