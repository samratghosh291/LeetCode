class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int r = arr.size();
        int c = arr[0].size();
        
        // Create vectors to track rows and columns with zeros
        vector<int> v_row(r);  // Track rows with zeros
        vector<int> v_col(c);  // Track columns with zeros
        
        // Step 1: Mark rows and columns with zeros
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[i][j] == 0) {
                    v_row[i] = 1;  // Mark row i as having a zero
                    v_col[j] = 1;  // Mark column j as having a zero
                }
            }
        }
        
        // Step 2: Set rows and columns with zeros to zeros
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (v_row[i] == 1 || v_col[j] == 1) {
                    arr[i][j] = 0;  // Set element at (i, j) to zero
                }
            }
        }
    }      
};
