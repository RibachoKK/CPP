#include <iostream>
#include <algorithm>

int main() {
    const int m = 15;  
    int arr[m];

    
    for (int i = 0; i < m; ++i) {
        arr[i] = i % 3;
    }

    
    std::sort(arr, arr + m);

    
    std::cout << "Масив після перестановки: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
