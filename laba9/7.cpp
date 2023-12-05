#include <iostream>

int main() {
    const int size = 8;  
    int arr[size] = {3, -2, 7, 0, 5, 8, 1, 6};

    
    for (int i = 1; i < size - 1; ++i) {
        arr[i] = (arr[i - 1] + arr[i + 1]) / 2;
    }

    
    std::cout << "Масив після заміни: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
