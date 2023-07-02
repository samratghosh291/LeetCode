//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&v)  {
        // code here
        
        vector<int>store;
        int val=0;
        int direction =0;
        int left=0;
        int right=v[0].size()-1;
        int top=0;
        int buttom= v.size()-1;
        
        
        while(left<=right && top<=buttom){
            
            if(direction==0){
                
                //left->right
                for(int i=left;i<=right;i++){
                    val=v[top][i];
                    store.push_back(val);
                }
                top++;
                
            }
            else if(direction==1){
                
                //top->buttom
                for(int i=top;i<=buttom;i++){
                    val=v[i][right];
                    store.push_back(val);
                    
                }
                right--;
                
            }
            else if(direction==2){
                
                //right->left
                for(int i=right;i>=left;i--){
                    val=v[buttom][i];
                    store.push_back(val);
                }
                
                buttom--;
                
            }
            else{
                
                //buttom->top
                
                for(int i=buttom;i>=top;i--){
                    val=v[i][left];
                    store.push_back(val);
                }
                
                left++;
                
                
            }
            
            direction=(direction+1)%4;
            
        }
        
        reverse(store.begin(),store.end());
        
        return store;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends