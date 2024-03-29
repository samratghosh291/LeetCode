//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(const std::string& A) {
        int n = A.length();
        std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));

        // All substrings of length 1 are palindromic (base case)
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;

        // Build the dp table for substrings of length 2 and above
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i < n - len + 1; ++i) {
                int j = i + len - 1;

                if (A[i] == A[j] && len == 2)
                    dp[i][j] = 2;
                else if (A[i] == A[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                else
                    dp[i][j] = std::max(dp[i][j - 1], dp[i + 1][j]);
            }
        }

        return dp[0][n - 1];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends