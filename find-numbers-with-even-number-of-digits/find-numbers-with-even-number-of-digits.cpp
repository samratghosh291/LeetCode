class Solution {
public:
    
    
    bool countDigit(int n){
         int count=0;
        
        while(n>0){
           n/=10;
            count++;   
        }
    
        if(count%2==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    int findNumbers(vector<int>& nums) {
         int cnt=0;
        
        for(auto &it: nums){
            
            if(countDigit(it)){
                cnt++;
            }
            
        }
        
        return cnt;     
    }
};