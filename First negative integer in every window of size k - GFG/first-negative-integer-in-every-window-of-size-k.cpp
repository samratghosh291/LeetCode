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


vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    vector<long long> ans;
    queue<long long> q;
    
    long long int left = 0, right = 0;
    
    while (right < n) {
        // If the current element is negative, add it to the queue
        if (arr[right] < 0) {
            q.push(arr[right]);
        }
        
        // When the window size reaches k
        if (right - left + 1 == k) {
            // If the queue is not empty, the front element is the answer
            if (!q.empty()) {
                ans.push_back(q.front());
                // If the left element is the same as the front of the queue, remove it
                if (arr[left] == q.front()) {
                    q.pop();
                }
            } else {
                // If the queue is empty, there are no negative integers in the window
                ans.push_back(0);
            }
            
            // Move the window by incrementing left
            left++;
        }
        
        // Move the right pointer to the next position
        right++;
    }
    
    return ans;
}
