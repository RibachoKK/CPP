#include <iostream>

int main() {
    int busNumber;

    std::cout << "Enter the bus number (1-7): ";
    std::cin >> busNumber;

    int stops;

    switch (busNumber) {
        case 1:
            stops = 10;
            break;
        case 2:
            stops = 15;
            break;
        case 3:
            stops = 8;
            break;
        case 4:
            stops = 12;
            break;
        case 5:
            stops = 20;
            break;
        case 6:
            stops = 5;
            break;
        case 7:
            stops = 18;
            break;
        default:
            std::cout << "Invalid bus number." << std::endl;
            return 1; // Exit with an error code
    }

    std::cout << "Bus " << busNumber << " has " << stops << " stops." << std::endl;

    return 0;
}
