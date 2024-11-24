/* find the first and last occurance f an array . array ={4,5,6,6,6,7} first occurance = 2 and last occurance =4 */

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;  // Move left to find earlier occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;

    }
    return ans;
}

int lastOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end) {

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;  // Move right to find later occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;

    }
    return ans;
}

int main() {
    int arr[6] = {4, 5, 6, 6, 6, 9};
    cout << "The first occurrence of 6 is " << firstOccurance(arr, 6, 6) 
         << " and the last occurrence of 6 is " << lastOccurance(arr, 6, 6) << endl;
    return 0;
}
