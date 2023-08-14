//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> v) 
    {
        // Code here.
        
     sort(v.begin(),v.end());   
    unordered_map<int, int> freqMap;
    for (int num : v) {
        freqMap[num]++;
    }

    v.erase(remove_if(v.begin(), v.end(),
        [&freqMap](int num) { return freqMap[num] > 1; }),
        v.end());
        
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends