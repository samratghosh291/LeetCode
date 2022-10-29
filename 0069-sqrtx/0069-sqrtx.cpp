class Solution {
public:
    int mySqrt(int x) {
        
        if(x<=1){
            return x;
        }
        
        long long s=1,e=x,mid,ans;
       
        while(s<=e){
            
            mid=s+((e-s)>>1);
            
            if((mid*mid)<=x){
                
                ans=mid;
                s=mid+1;
                
                
            }
            
            else{
                e=mid-1;
            }
       
        }
        
        return ans;
        
    }
};