#include <iostream>

int main() {
    const int size = 6;  // Задайте розмір масиву
    int arr[size] = {3, -2, 7, -4, 5, 8};

    int max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    for (int i = 0; i < max_index; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

   
    std::cout << "Масив після заміни: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
