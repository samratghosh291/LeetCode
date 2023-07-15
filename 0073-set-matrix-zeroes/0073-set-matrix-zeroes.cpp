class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int r = arr.size();
        int c = arr[0].size();

        bool flag = false; // Flag to track if the first column has a zero

        // Step 1: Mark rows and columns with zeros
        for (int i = 0; i < r; i++) {
            if (arr[i][0] == 0) {
                flag = true; // Set the flag if the first column has a zero
            }

            for (int j = 1; j < c; j++) {
                if (arr[i][j] == 0) {
                    arr[i][0] = 0; // Mark the corresponding row with a zero
                    arr[0][j] = 0; // Mark the corresponding column with a zero
                }
            }
        }

        // Step 2: Set rows and columns with zeros to zeros
        for (int i = r - 1; i >= 0; i--) {
            for (int j = c - 1; j >= 1; j--) {
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                    arr[i][j] = 0; // Set the element to zero if its row or column is marked with a zero
                }
            }

            if (flag) {
                arr[i][0] = 0; // Set the first column to zero if the flag is set
            }
        }
    }
};
