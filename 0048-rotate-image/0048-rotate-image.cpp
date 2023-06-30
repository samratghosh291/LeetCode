class Solution {
public:
      void transpose(vector<vector<int>>& arr, int n){
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               swap(arr[i][j],arr[j][i]);
           }
       }
   }
    
    void reverseRows(vector<vector<int>>& arr, int n){
        for(int i=0;i<n;i++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
    void rotate(vector<vector<int>>& arr) {
        int n=arr.size();
        
        transpose(arr,n);
        reverseRows(arr,n);
        
    }
};