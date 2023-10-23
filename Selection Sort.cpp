#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &arr) {
   int n = arr.size();
   for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < n; ++j) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }
    if (min_idx != i) {
        std::swap(arr[i], arr[min_idx]);
      }
   }
}

using namespace std;

int main() {
    std::vector<int> numbers = {4, 3, 9, 1, 6, 8, 2, 5, 7};

    std::cout << "Unsorted array: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSort(numbers);

    std::cout << "Sorted array: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;



    return 0;
}
