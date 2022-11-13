class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
       int sum;
        
        int wealth=INT_MIN;
    
        for(int i=0;i<accounts.size();i++){
            
           sum=0;
            
            for (auto it = accounts[i].begin();it != accounts[i].end(); it++){
            
         sum+=*it;
            
        }
         if(wealth<=sum){
             wealth=sum;
         }
  
        }
        
       return wealth;
          
    }
};