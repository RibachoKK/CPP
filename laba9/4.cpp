#include <iostream>

int main() {
    const int size = 8; 
    int arr[size] = {3, -2, 7, -4, 5, 8, 1, 6};

    
    int A;
    std::cout << "Введіть число A: ";
    std::cin >> A;

   
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > A) {
            count++;
        }
    }

    
    std::cout << "Кількість елементів більших за " << A << ": " << count << std::endl;

    return 0;
}
