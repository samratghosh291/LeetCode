//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 
                                                 
                                                 
                                                vector<long long> ans;
                                                queue<long long>q;
                                                
                                                long long int left=0,right=0;
                                                
                                                
                                                while(right<n){
                                                    
                                                    //when window size does not reach 
                                                     if (arr[right] < 0) {
                                                        q.push(arr[right]);
                                                     }
                                                     
                                                    
                                                    //when window size hits
                                                    if((right-left+1)==k){
                                                        
                                                        //calculation for answer
                                                        
                                                        if(!q.empty()){
                                                            ans.push_back(q.front());
                                                        }
                                                        else{
                                                            ans.push_back(0);
                                                        }
                                                        
                                                        //calculation for previos elements
                                                        
                                                        if(q.front()==arr[left]){
                                                            
                                                            q.pop();
                                                        }
                                                        //maintain the window size
                                                        
                                                        left++;
                                                        
                                                    }
                                                    
                                                    right++;
                                                    
                                                }
                                                
                                                return ans;
                                                 
                                                 
                                                 
 }