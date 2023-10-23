#include <iostream>
#include <vector>



void bubbleSort(std::vector<int> &arr) {
     int n = arr.size();
     for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);

            }
        }
     }
}


int main() {
    std::vector<int> numbers = {5, 3, 9, 1, 6, 8, 2, 4, 7};

    std::cout << "Unsorted array: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
     std::cout << std::endl;

     bubbleSort(numbers);

     std::cout << "Sorted array: ";
     for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;





    return 0;
}
