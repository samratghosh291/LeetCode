class Solution {
    public:
    double average(vector<int>& salary) {
       
        for(int i=0;i<(salary.size()-1);i++){
            
            for(int j=0;j<(salary.size()-i-1);j++){
                
                if(salary[j]>salary[j+1])
                {
                    double temp=salary[j];
                    salary[j]=salary[j+1];
                    salary[j+1]=temp;
                }
            }
        }
        double avg=0;
        
        for(int i=1;i<(salary.size()-1);i++){
             avg=avg+salary[i];
        }
        
        return avg/(salary.size()-2);
        
        
        
        
    }
       
};

