//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &v, int r, int c, int target)
	{
	    // your code here
	    
	    int i=0;
	    int j=v[0].size()-1;
	    
	    while(j>=0 and i<=v.size()-1){
	        
	        
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

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends