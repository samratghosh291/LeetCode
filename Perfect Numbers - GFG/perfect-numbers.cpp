//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long n) {
        // code here
        
        long long ans=0;
        
        for (int i=1;i<=sqrt(n);i++){
            
            if(n%i==0){
                ans+=i;
                if(i!=1){
                    
                  ans+=(n/i);  
                    
                }
                
            }
        }
        
        if(ans==n and n!=1){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends