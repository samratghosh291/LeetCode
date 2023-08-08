//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int num[], int den[]) {
    // Create an unordered_map to store the frequency of fraction values
    unordered_map<float, int> mp;
    
    int ans = 0; // Initialize the answer to 0
    
    // Loop through each fraction
    for (int i = 0; i < n; i++) {
        // Calculate the difference between the numerator and denominator,
        // then cast it to a floating-point number and calculate the ratio
        float diffRatio = (float)(den[i] - num[i]) / den[i];
        
        // If the difference ratio is present in the map, add its frequency to the answer
        if (mp.find(diffRatio) != mp.end()) {
            ans += mp[diffRatio];
        }
        
        // Increment the frequency of the current fraction's ratio in the map
        mp[(float)num[i] / den[i]]++;
    }
    
    return ans; // Return the total count of pairs with sum equal to 1
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
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends