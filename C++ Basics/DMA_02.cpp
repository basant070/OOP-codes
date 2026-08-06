// a program in c++ that can read 5 integer and sort them in ascending order using DMA concept
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // ---------- Dynamic Memory Allocation (DMA) ----------
    // Allocate memory dynamically for 5 integers using 'new'
    int* arr = new int[n];

    // Step 1: Read 5 integers into the dynamically allocated array
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Step 2: Sort the array in ascending order using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 3: Display the sorted array
    cout << "\nSorted array in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Free the dynamically allocated memory
    delete[] arr;

    return 0;
}