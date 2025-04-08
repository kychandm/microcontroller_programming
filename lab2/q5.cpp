#include <iostream>

int main() {
    // Initialize an array of integers
    // and a pointer to the first element of the array
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    // Reverse the array using pointer arithmetic
    int arr2[5];
    for (int i = 0; i < 5; i++) {
        arr2[4-i] = *(ptr + i);
    }

    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
}