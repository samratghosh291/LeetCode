//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    int flag=0;
	    
	    int left=0;
	    int right=s.length()-1;
	    while(left<right){
	        
	        if(s[left]!=s[right]){
	            return 0;
	        }
	        
	        flag=1;
	        left++;
	        right--;
	        
	    }
	    
	    return flag;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends