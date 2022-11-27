//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long int mx=INT_MIN;
        int i=0,j=0;
        long long int sum=0;
        while(j<N){
            
            
            if((j-i+1)<K){
                sum+=Arr[j];
                j++;
            }
            if((j-i+1)==K){
                sum+=Arr[j];
               mx=max(sum,mx);
                sum-=Arr[i];
                i++;
                j++;
            }    
            
        }
        
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends