class Solution {
public:
    bool isPalindrome(int x) {
        
        string str=to_string(x);
        bool flag=false;
        int st=0;
        int end=str.length()-1;        
        
        while(st<=end){
            if(str[st]!=str[end]){
                flag=false;
                break;
            }
            else{
                flag=true;
                st++;
            end--;
            }
            
        }
     return flag;   
    }
};