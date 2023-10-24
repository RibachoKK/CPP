#include <iostream>

int main() {
    int number;

    Enter:
    std::cout << "Enter a three-digit positive number: ";
    std::cin >> number;

    if (number >= 100 && number <= 999) {
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        int count = 0; // Counter for digits that are not equal to 1 and 9

        if (digit1 != 1 && digit1 != 9) {
            count++;
        }
        if (digit2 != 1 && digit2 != 9) {
            count++;
        }
        if (digit3 != 1 && digit3 != 9) {
            count++;
        }

        std::cout << "The number of digits that are not equal to 1 and 9: " << count << std::endl;
    } else {
        std::cout << "The entered number is not a three-digit positive number." << std::endl;
        goto Enter;
    }

    return 0;
}

