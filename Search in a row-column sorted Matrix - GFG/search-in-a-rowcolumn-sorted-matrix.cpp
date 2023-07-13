//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    
    bool binarySearch(vector<int> &v,int k){
        
        int st=0;
        int end=v.size()-1;
        
        while(st<=end){
            
            int mid= ((end-st)/2)+st;
            
            if(k<v[mid]){
                end=mid-1;
            }
            
            else if(k>v[mid]){
                st=mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
    
    
    bool search(vector<vector<int> > v, int n, int m, int target) 
    {
        // code here 
        for(int i=0;i<n;i++){
            if(binarySearch(v[i],target)){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 


// } Driver Code Ends