/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
        
    int pairSum(ListNode* head) {
        
        vector<int>v;
        
        ListNode*  temp=head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        int n=v.size();
        int mx=INT_MIN;
        int sum=0;
        
        for(int i=0;i<=((n/2)-1);i++){
            sum=v[i]+v[n-i-1];
            
            if(sum>mx){
                mx=sum;
            }
        }
        
        return mx;
        
    }
};