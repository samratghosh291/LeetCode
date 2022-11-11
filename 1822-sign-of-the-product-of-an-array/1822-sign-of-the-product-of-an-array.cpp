class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0){
               nums[i]=-1;
               prod*=nums[i];
           }
            else if(nums[i]>0){
                nums[i]=1;
                prod*=nums[i];
            }
            else{
                return 0;
            }
        }
        
        if(prod==-1){
            return -1;
        }
        else {
            return 1;
        }
       
        
    }
};