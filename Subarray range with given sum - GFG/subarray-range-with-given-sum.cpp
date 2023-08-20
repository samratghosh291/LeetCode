//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int k)
    {
        //Your code here
        
         // Initialize a map to store cumulative sums and their corresponding indices.
    map<int, int> mp;
    mp[0]=1;

    int sum = 0, count = 0;

    // Traverse through the array.
    for (int i = 0; i < n; i++) {
        // Add the current element to the cumulative sum.
        sum+=arr[i];
        int rem=sum-k;
        count+=mp[rem];
        mp[sum]+=1;
    }

    // Return the maximum subarray length that adds up to the given sum k.
    return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends