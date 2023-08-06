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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==nullptr or head->next ==nullptr or k==0){
            return head;
        }
        
        ListNode* last=head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        
        int count=1;
        while(last->next!=nullptr){
            count++;
            last=last->next;
        }
        k=k%count;
        
        if(count==k or k==0){
            return head;
        }
        
        
        for(int i=1;i<=(count-k);i++){
            prev=curr;
            curr=curr->next;
        }
        
        last->next=head;
        prev->next=nullptr;
        return curr;
        
    }
};