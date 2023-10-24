#include <iostream>

int main() {
    unsigned int N;
    std::cout << "Enter a natural number N: ";
    std::cin >> N;

    int product = 1;

    while (N > 0) {
        int digit = N % 10;

        if (digit % 2 == 0) {
            product *= digit;
        }

        N /= 10;
    }

    std::cout << "Product of even digits in the entered number: " << product << std::endl;

    return 0;
}
