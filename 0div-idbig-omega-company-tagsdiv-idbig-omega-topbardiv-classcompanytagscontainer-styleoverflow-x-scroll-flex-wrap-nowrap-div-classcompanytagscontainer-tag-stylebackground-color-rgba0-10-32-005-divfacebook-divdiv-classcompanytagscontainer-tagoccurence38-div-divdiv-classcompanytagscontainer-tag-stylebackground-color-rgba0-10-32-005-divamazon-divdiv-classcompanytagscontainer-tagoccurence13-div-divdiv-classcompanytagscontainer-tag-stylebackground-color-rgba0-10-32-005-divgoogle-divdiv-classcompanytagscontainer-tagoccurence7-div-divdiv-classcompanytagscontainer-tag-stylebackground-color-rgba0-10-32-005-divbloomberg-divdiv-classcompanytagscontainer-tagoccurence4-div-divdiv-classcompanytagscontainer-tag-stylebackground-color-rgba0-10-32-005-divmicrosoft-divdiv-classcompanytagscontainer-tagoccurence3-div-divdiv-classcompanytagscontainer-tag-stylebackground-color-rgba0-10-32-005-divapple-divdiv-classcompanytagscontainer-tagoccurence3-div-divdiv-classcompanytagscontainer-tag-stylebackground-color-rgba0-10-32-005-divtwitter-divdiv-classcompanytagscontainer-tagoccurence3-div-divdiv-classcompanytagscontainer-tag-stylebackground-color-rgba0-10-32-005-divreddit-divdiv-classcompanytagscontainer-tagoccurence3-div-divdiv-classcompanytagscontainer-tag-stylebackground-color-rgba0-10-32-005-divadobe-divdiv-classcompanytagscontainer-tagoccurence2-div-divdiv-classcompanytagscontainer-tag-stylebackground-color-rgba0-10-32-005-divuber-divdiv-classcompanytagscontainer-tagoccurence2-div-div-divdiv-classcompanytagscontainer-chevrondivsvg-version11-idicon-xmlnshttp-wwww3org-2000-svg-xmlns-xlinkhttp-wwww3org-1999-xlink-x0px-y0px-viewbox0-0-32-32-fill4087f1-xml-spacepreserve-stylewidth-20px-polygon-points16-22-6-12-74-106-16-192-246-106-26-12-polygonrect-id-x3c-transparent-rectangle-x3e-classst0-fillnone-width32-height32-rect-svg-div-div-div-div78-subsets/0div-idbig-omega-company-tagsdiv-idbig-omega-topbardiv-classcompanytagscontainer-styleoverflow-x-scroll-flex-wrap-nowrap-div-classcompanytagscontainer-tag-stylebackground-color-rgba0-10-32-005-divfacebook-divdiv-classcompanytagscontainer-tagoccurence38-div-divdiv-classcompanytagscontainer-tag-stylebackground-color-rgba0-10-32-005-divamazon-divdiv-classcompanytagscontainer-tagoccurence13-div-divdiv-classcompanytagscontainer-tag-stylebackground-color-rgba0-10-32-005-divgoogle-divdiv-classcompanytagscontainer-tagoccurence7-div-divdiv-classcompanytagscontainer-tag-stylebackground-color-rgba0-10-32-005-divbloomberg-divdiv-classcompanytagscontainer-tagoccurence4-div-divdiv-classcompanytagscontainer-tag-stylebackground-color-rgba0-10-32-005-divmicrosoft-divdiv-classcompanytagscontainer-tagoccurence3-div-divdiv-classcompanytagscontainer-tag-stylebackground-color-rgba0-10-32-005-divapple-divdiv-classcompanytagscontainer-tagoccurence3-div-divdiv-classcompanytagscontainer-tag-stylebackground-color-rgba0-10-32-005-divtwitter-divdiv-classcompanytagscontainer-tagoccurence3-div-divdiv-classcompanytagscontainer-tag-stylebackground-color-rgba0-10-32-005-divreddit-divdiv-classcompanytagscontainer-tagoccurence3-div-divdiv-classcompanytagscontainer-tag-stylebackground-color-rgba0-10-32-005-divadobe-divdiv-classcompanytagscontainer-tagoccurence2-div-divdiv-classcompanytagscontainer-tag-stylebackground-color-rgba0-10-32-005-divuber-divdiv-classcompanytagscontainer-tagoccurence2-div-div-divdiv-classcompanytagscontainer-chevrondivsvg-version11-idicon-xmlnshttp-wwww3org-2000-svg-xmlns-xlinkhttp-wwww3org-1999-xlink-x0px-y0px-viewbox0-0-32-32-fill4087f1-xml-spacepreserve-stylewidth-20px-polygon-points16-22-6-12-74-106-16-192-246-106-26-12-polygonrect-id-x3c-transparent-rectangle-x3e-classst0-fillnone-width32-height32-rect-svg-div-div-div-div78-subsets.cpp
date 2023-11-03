

class Solution {
private:
    void generateSubset(vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp, int idx) {
        // Base case
        if (idx >= arr.size()) {
            ans.push_back(temp);
            return;
        }

        // Inclusion
        temp.push_back(arr[idx]);
        generateSubset(arr, ans, temp, idx + 1);
        temp.pop_back();

        // Exclusion
        generateSubset(arr, ans, temp, idx + 1);
    }
    
    public:
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        generateSubset(arr, ans, temp, 0);
        return ans;
    }
};
