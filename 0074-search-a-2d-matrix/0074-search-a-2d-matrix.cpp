class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        
        int r=v.size();
        int c=v[0].size();
        int low=0;
        int high=(r*c)-1;
        
        while(low<=high){
            int mid=((high-low)/2)+low;
            int curr = v[mid/c][mid%c];
            if(target<curr){
                high=mid-1;
            }
            else if(target>curr){
               low=mid+1;
            }
            else{
                return true;
            }
        }
        
        return false;
        
        
    }
};