class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        unordered_map<int,vector<int>>storeIdx;
        int mxIdxSum=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                mxIdxSum=max((i+j),mxIdxSum);
                storeIdx[i+j].push_back(nums[i][j]);
            }
        }
        
        for(int i=0;i<=mxIdxSum;i++){
            for(auto & it:storeIdx[i]){
                ans.push_back(it);
            }
        }
        
        return ans;
        
    }
};