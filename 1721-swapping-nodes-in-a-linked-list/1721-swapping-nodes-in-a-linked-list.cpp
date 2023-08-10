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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head==nullptr or head->next==nullptr){
            return head;
        }
        
        ListNode* left=head;
        ListNode* right=head;
        ListNode* curr=head;
        
        
        //count the loop
        int count=0;
        
        while(curr){
            count++;
            curr=curr->next;   
        }
        
        //position left pointer at k position from begining
        
        for(int i=1;i<k;i++){
            left=left->next;
        }
        
        //position left pointer at k position from end
        
        for(int i=1;i<(count+1-k);i++){
            right=right->next;
        }
        
        int temp=left->val;
        left->val=right->val;
        right->val=temp;
        
        return head;
        
    }
};