class Solution {
public:
    int mySqrt(int x) {
        
        long long i,m;
        if(x<0 || x>INT_MAX){
            return 0;
        }
       
        for(i=0;(i*i)<=x;i++){
            m=i;
        }
        
        return m;
    }
};