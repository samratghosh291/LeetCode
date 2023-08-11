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
    ListNode* swapPairs(ListNode* head) {
        
        if(head==nullptr or head->next==nullptr){
            return head;
        }
        
        ListNode* dummy=new  ListNode(-1);
        ListNode* prev=dummy;
        ListNode* curr=head;
        
        while(curr!=nullptr and curr->next!=nullptr){
            
            prev->next=curr->next;
            prev=prev->next;
            curr->next=prev->next;
            prev->next=curr;
            prev=curr;
            curr=curr->next;
        }
        
        
        return dummy->next;
        
    }
};