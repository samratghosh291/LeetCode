class Solution {
public:
    void setZeroes(vector<vector<int>>&arr) {
        int r=arr.size();
        int c=arr[0].size();
        vector<int>v_row(r);
        vector<int>v_col(c);
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                if(arr[i][j]==0){
                    v_row[i]=1;
                    v_col[j]=1;
                }
            }
        }
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(v_row[i]==1 or v_col[j]==1){
                    arr[i][j]=0;
                }
            }
    }
        
    }      
};