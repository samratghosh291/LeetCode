//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    
    int getAns(vector<vector<int>>arr, int n){
        
        int heighestSum=INT_MIN;
        // for getting the heighest sum 
        
        for(int i=0;i<n;i++){
            
            int sum=0;
            for(int j=0;j<n;j++){
                
                sum+=arr[i][j];
            }
            
            heighestSum=max(heighestSum,sum);
        }
        
        
        //for getting the ans
        int ans=0;
        
         for(int i=0;i<n;i++){
            
            int sum=0;
            for(int j=0;j<n;j++){
                
                sum+=arr[i][j];
            }
            
            ans+=(heighestSum-sum);
        }
        
        return ans;
        
    }
    
    void transposeMatrics(vector<vector<int>>&arr, int n){
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        
        
    }
    
    int findMinOpeartion(vector<vector<int> >arr, int n)
    {
        // code here 
        
        int ans=getAns(arr,n);
        transposeMatrics(arr,n);
        int trAns=getAns(arr,n);
            
        return max(ans,trAns);
        
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends