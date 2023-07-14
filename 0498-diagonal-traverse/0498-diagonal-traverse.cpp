class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int>ans(n*m);
        int i=0; //points to where we need to put element in array
        int r=0,c=0;//starting position
        bool up=true;
        while(r<n && c<m){
          //if diagonal is going up
          if(up){
              while(r>0 && c<m-1){
                  ans[i++]=mat[r][c];
                  r--;
                  c++;
              }
              ans[i++]=mat[r][c];//to put uppermost right element in ans
              if(c==m-1){
                  r++;
              }else{
                  c++;
              }
          }
          //or down
          else{
              while(c>0 && r<n-1){
                  ans[i++]=mat[r][c];
                  r++;c--;
              }
              ans[i++]=mat[r][c];//to put value 4 in it
              if(r==n-1){
                  c++;
              }else{
                  r++;
              }
          }
          up=!up;
        }        
        return ans;
    }
};