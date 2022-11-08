class Solution {
public:
    int countOdds(int low, int high) {
        
        if(high%2==0&&low%2==0){        //if both high and low is even
            
            return ((high-low)/2);
            
        }
        else{                           //if one of them ids odd
            return (((high-low)/2)+1);
        }
        
    }
};