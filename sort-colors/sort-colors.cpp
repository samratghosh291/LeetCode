// Dutch National Flag Algorithm

// low=0,mid=0,high=n-1
// if(arr[mid]==0){

//     swap(arr[low],arr[mid]);
//     low++;
//     mid++;
// }

// if(arr[mid]==1){
//      mid++;
// }

// if(arr[mid]==1){

//     swap(arr[mid],arr[high]);
//     high--;
// }


// TC-->O(N)
// SC-->O(1)


// ****this sorting is possible when a array has only three unique value

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high){
            if(nums[mid]==0){
                
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;    
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};