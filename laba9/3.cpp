#include <iostream>
#include <algorithm>

int main() {
    const int size = 8;  
    int arr[size] = {3, -2, 7, -4, 5, 8, 1, 6};

    
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    
    std::swap(arr[min_index], arr[max_index]);

    
    std::cout << "Масив після заміни: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
