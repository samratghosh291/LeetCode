// ALGORITHM
// Greedy Approach
// 1.insert the (element,index) in vector<pair<int,int>>v 
// 2. sort the vector
// 3.int left =0;, right=v.size()-1;
// 4. while(i<j){
//     if(v[left].first+v[right].first==target){
//         return{v[left].second,v[right].second};
//     }
//     else if(v[left].first+v[right].first<target){
//         left++;
//     }
//     else{
//         right--;
//     }
// }
// return {};

// TC==>O(nlogn)(for sorting)+O(n)(for traversing)
//SC===>O(n) for xtra vector v


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        
        sort(v.begin(),v.end());
        int left=0;
        int right=v.size()-1;
         while(left<right){
    if(v[left].first+v[right].first==target){
        return{v[left].second,v[right].second};
    }
    else if(v[left].first+v[right].first<target){
        left++;
    }
    else{
        right--;
    }
}
        return {};
        
    }
};