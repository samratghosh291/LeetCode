class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>v(n,vector<int>(n));
        int val=1;
        int top=0;
        int buttom=v.size()-1;
        int left=0;
        int right=v[0].size()-1;
        int dir=0;
        
        while(left<=right and top<=buttom){
            
           //left->right
            if(dir==0){
                for(int i=left;i<=right;i++){
                    v[top][i]=val;
                    val++;
                }
                                
                top++;
            }
            
            // top->buttom
            
            else if(dir==1){
                for(int i=top;i<=buttom;i++){
                    v[i][right]=val;
                    val++;
                }
                
                right--;
            }
            
            // right->left
            
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    v[buttom][i]=val;
                    val++;
                }
                
                buttom--;
            }
            
            
            //buttom->top
            
            else{
                for(int i=buttom;i>=top;i--){
                    v[i][left]=val;
                    val++;
                }
                
                left++;
            }
                 
        dir=(dir+1)%4;    
            
        }
        
        return v;
        
    }
};