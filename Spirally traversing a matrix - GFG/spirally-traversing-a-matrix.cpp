//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > v, int r, int c) 
    {
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
        
        return store;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends