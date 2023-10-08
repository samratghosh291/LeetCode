//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long n) {
        // code here
        
        long long ans=0;  //initialize the ans as 0
        
        for (int i=1;i<=sqrt(n);i++){   //run the loop upto sqrt(n)
            
            if(n%i==0){
                ans+=i;       //add the fatctor
                
                if(i!=(n%i)){   //check wheathe the factor is not sqrt(n)
                
                    ans+=(n/i);   //add anothe factor
                }
            }
        }
        
        // now ans is the sum of all unique factor of ans 
        
        
        
        // check wheathe rthe given no. is not 1 or perect 
        if((ans-n)==n and n!=1){
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