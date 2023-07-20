//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(std::string s) {
        std::unordered_map<char, int> mp;

        // Count the frequency of each character in the string
        for (char ch : s) {
            mp[ch]++;
        }

        // Find the first non-repeating character in the string
        for (char ch : s) {
            if (mp[ch] == 1) {
                return ch;
            }
        }

        return '$'; // If no non-repeating character is found, return '$'.
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends