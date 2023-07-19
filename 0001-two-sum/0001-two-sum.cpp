// ALGORITHM:
// 1. delclear a map to store the <arr[i] ,i> in <key,val>
// 2. for(i=0 to i=(n-1))
//     2.1. req=target-arr[i];
//     2.2. if(req finds in map)
//             return(map->val,i)
//         else{
//             insert(arr[i],i) in map;
//         }

// TC=O(nlogn)
// SC=O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int,int>mp;
        vector<int>v;
        
        for(int i=0;i<arr.size();i++){
            
            int req=target-arr[i];
            
            auto it=mp.find(req); //get the iterator if find the req element in map
            
            if(it!=mp.end()){
                v.push_back(it->second); //insert the lower indices into vector
                v.push_back(i);          // insert the higher indices into vector
                break; //stop searching after getting the indices that satisfy the target sum
            }
            else{
                //if arr[i] not find in map then insert it into the map
                mp.insert(make_pair(arr[i],i)); 
            }
        }
        
        return v; //return the vector
        
    }
};