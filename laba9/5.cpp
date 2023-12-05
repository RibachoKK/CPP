#include <iostream>
#include <algorithm>

int main() {
    const int size = 8;
    int arr[size] = {3, -2, 7, -4, 5, 8, 1, 6};

    
    std::sort(arr, arr + size, std::greater<int>());

    
    int second_largest = arr[1];

    
    std::cout << "Другий по величині елемент: " << second_largest << std::endl;

    return 0;
}
