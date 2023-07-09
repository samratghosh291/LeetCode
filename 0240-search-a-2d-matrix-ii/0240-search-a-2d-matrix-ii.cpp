class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        
        int stRow=0;
        int endRow=v.size()-1;
        int stColumn=0;
        int endColumn=v[0].size()-1;
        
        while(stRow<=endRow and endColumn>=0){
            
            if(v[stRow][endColumn]==target){
                return true;
            }
            
            else if(target<v[stRow][endColumn]){
                endColumn--;
            }
            else{
                stRow++;
            }
        }
        return false;
        
    }
};