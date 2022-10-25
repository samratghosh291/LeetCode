class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        
        //all the power of 2 should be positive
        if(n<0 || n==0){
            return false;
        }
 
      return n&n-1?false:true;
        
    }
};