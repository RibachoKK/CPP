#include <iostream>

int main() {
    int n = 10;
    double sum_of_squares = 0;

    for (int i = 1; i <= n; i++) {
        double number;
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;
        sum_of_squares += number * number;
    }

    double average = sum_of_squares / n;

    std::cout << "The average of the squares of the entered numbers is: " << average << std::endl;

    return 0;
}
