#include <iostream>

int main() {
    const int size = 8;  
    int arr[size] = {3, -2, 7, 0, 5, 8, 1, 6};

    
    int zero_index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zero_index = i;
            break;
        }
    }

    
    if (zero_index != -1) {
        std::cout << "Номер першого нульового елемента: " << zero_index << std::endl;
    } else {
        std::cout << "Масив не містить нульових елементів." << std::endl;
    }

    return 0;
}
