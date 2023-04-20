class Solution {
public:
    
      int maxProfit(vector<int>& prices) {
        int lastPrice = INT_MAX;
        int n = prices.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(lastPrice > prices[i]){
                lastPrice = prices[i];
            }
            int potd = prices[i]-lastPrice;
            if(potd > ans) ans = potd;
        }
        return ans;
    }
        
    
};