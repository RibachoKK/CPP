#include <iostream>

int main() {
    const int n = 10;  
    int X[n] = {1, 2, 0, 1, 0, 2, 1, 2, 0, 1};

    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;

    
    for (int i = 0; i < n; ++i) {
        if (X[i] == 0) {
            zero_count++;
        } else if (X[i] == 1) {
            one_count++;
        } else if (X[i] == 2) {
            two_count++;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (zero_count > 0) {
            X[i] = 0;
            zero_count--;
        } else if (one_count > 0) {
            X[i] = 1;
            one_count--;
        } else if (two_count > 0) {
            X[i] = 2;
            two_count--;
        }
    }

    
    std::cout << "Масив після перестановки: ";
    for (int i = 0; i < n; ++i) {
        std::cout << X[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
