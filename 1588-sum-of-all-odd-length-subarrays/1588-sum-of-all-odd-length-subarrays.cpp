class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=ceil(((n-(i*1.0))*((i*1.0)+1))/2)*arr[i];
        }
        return sum;
        
    }
};