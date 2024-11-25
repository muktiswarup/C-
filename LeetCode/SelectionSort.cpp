#include <iostream>
using namespace std;

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int n = 5;

    // Selection sort algorithm
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;

        // Find the index of the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[minindex], arr[i]);

        // Print the array after each pass (optional)
        cout << "Array after pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    // Output the sorted array
    cout << "The sorted order is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
