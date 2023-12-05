#include <iostream>

int main() {
    const int n = 10; 
    int A[n] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 1};

    int current_count = 1;
    int max_count = 1;

    
    for (int i = 1; i < n; ++i) {
        if (A[i] == A[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }

        if (current_count > max_count) {
            max_count = current_count;
        }
    }

   
    std::cout << "Найбільша кількість підряд розміщених однакових елементів: " << max_count << std::endl;

    return 0;
}
