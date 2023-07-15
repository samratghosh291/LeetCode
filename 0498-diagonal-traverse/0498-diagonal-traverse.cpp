class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        vector<int>v(row*col); // to be stored array
        int i=0;
        int j=0;
        int idx=0;  //index of stored array
        bool up=true;
        
        while(i<row and j<col){
            
            ///for upward direction
            if(up){
                
                while(i>0 and j<(col-1)){
                    
                    v[idx++]=arr[i][j];
                    i--;
                    j++;
                    
                }
                
                v[idx++]=arr[i][j];    //stored the terminal element
                
                if(j==(col-1)){    // when j reached point at terminal column element
                    i++;
                }
                else{
                    j++;
                }   
            }
            
            // for downward direction 
            
            else{
                
             while(i<(row-1) and j>0) {
                 
               v[idx++]=arr[i][j];
                 i++;
                 j--;
                        
             }
                
             v[idx++]=arr[i][j];  //stored the terminal element
                
                if(i==(row-1)){    // when j reached point at terminal row element
                    j++;
                }
                else{
                    i++;
                }
                
            }
            
            up=!up;   //toggle the up value
        }
        
        return v;
        
    }
};