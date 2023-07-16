//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.  
        
        vector<int>v;  //declear a vector for store the elements of queue
        
        
        //store the elements of the queue in the vector
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        
        
        // reverse the vector 
        int st=0;
        int end=v.size()-1;
        
        while(st<=end){
            swap(v[st],v[end]);
            st++;
            end--;
        }
        
        
        // restore the elments of vector into the same queue 
        for(int i=0;i<v.size();i++){
            q.push(v[i]);
        }
        
        return q;
        
        
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends