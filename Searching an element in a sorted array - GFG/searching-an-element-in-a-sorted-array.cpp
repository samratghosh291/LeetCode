//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    
    int search(int arr[],int low,int high, int key){
        
        
    int mid=((high-low)/2)+low;
    
    if(low<=high){
        
        
    if(arr[mid]==key){
        return 1;
    }  
    
    if(arr[mid]>key){
        return search(arr,low,mid-1,key);
    }
    
    else{
        return search(arr,mid+1,high,key);
    }
    
        
    }
    
    return -1;
    

    }

    
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       
       sort(arr,arr+N);
       
       return search(arr,0,N-1,K);
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends