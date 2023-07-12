class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int count = 1; // Initialize count to 1 for the first unique element
        int j = 1;    // Pointer to track the position for the next unique element
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i]; // Move the unique element to the next position
                count++;
                j++;
            }
        }
        
        return count;
    }
};