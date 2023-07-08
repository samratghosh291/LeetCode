class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        
        int i=0;
        int j=v[0].size()-1;
        
        while(j>=0 and i<=v.size()-1)
        {
            if(target<v[i][j]){
                j--;
            }
            else if(target>v[i][j]){
                i++;
            }
            
            else{
                return true;
            }
        }
        return false;
        
        
    }
};