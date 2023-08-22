class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        //sort the vector
        sort(nums.begin(),nums.end());
        
        //initialize count as 0
        int count=0;
        
        //two pointer approach
        int left=0;
        int right=nums.size()-1;
        
        while(left<right){
            
            //if their sum==k ans increase the count and also move 
            // left pointer forward and right pointer backward
            
            if((nums[left]+nums[right])==k){
                count++;
                left++;
                right--;
            }
            
            // if their sum > k then move right pointer backward
            else if((nums[left]+nums[right])>k){
                right--;
            }
            
            //if their sum < k then move left pointer forward 
            else{
                left++;
            }
            
        }
        
        return count;
        
    }
};