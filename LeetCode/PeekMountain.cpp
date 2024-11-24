#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid;

        while (s < e) {
            mid = s + (e - s) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // If the middle element is less than the next element, peak lies in the right part
                s = mid + 1;
            } else {
                // If the middle element is greater than or equal to the next, peak lies in the left part
                e = mid;
            }
        }
        // At the end, s == e, which is the peak index
        return s;
    }
};
