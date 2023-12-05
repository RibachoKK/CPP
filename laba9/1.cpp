#include <iostream>
#include <algorithm>

int main() {
    const int size = 12;
    int m[size] = {12, 4, 7, 1, 8, 10, 5, 2, 6, 11, 9, 3};

    
    std::sort(m, m + size);
    std::cout << "Зростанням: ";
    for (int i = 0; i < size; ++i) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;


    std::sort(m, m + size, std::greater<int>());
    std::cout << "Спаданням: ";
    for (int i = 0; i < size; ++i) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
