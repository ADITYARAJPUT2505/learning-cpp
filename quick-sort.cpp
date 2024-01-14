#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to partition the array
int partition(int arr[], int low, int high) {
    int randomIndex = low + rand() % (high - low + 1);
    std::swap(arr[randomIndex], arr[high]);  // Swap the randomly chosen pivot with the last element
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed for random number generator

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int *unsortedArray = new int[n];

    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> unsortedArray[i];
    }

    quickSort(unsortedArray, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << unsortedArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] unsortedArray; // Deallocate memory

    return 0;
}
