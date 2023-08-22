class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int j=1;
        int count=1;
        
        while(j<n){
            
            if(nums[i]==nums[j] ){
                count++;
            }
            else{
                count=1;
            }
            
            if(count<=2){
                nums[++i]=nums[j];
            }
            j++;
        }
        
        return i+1;
        
    }
};