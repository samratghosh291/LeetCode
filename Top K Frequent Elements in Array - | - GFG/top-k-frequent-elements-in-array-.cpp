//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        
        //declear map
        map<int,int>mpp;
        
        //pre-computing data
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        // declear a vector of pair to store the data of map
        
        vector<pair<int,int>>v(nums.size());
        int i=0;
        
        for(auto it: mpp){
            v[i].second=it.first;
            v[i].first=it.second;
            i++;
        }
        
        
        //sorting the vactor
        sort(v.begin(),v.end());
        
        //fetch the k no. of elements and store it into vector
        vector<int >ans(k);
        for(i=0;i<k;i++){
            ans[i]=v[nums.size()-i-1].second;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends