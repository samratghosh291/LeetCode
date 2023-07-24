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
    ListNode* reverseList(ListNode* head) {
        
        
         if(head==nullptr){
            return nullptr;
        }
        
        else if(head->next==nullptr){
            return head;
        }
        
        else{
            
        ListNode* prev=head;
        ListNode* curr=prev->next;
        ListNode* nxt=curr->next;
        head->next=nullptr;
        
        while(nxt!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        
        curr->next=prev;
        head=curr;
        
        return head; 
            
        }
       
    }
        
        
    
};