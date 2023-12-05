#include <iostream>
#include <unordered_set>

int main() {
    const int m = 10;  
    int A[m] = {5, 7, 5, 2, 8, 7, 3, 2, 1, 5};

    
    std::unordered_set<int> unique_values;

    
    for (int i = 0; i < m; ++i) {
        unique_values.insert(A[i]);
    }

    
    int different_count = unique_values.size();

   
    std::cout << "Кількість різних чисел в масиві: " << different_count << std::endl;

    return 0;
}
