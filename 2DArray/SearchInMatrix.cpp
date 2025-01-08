//leet code no 74 search a 2d matrix 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Edge case: empty matrix or empty rows
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int m = matrix.size();       // Number of rows
        int n = matrix[0].size();    // Number of columns
        int start = 0;
        int end = m * n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int row = mid / n;       // Determine row index
            int col = mid % n;       // Determine column index

            if (matrix[row][col] == target) {
                return true;         // Target found
            } else if (matrix[row][col] > target) {
                end = mid - 1;       // Search left
            } else {
                start = mid + 1;     // Search right
            }
        }

        return false; // Target not found
    }
};
