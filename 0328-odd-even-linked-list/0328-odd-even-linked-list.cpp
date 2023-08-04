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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==nullptr){
            return head;
        }
        
        ListNode* odd=head;
        ListNode* even=head->next;
        
        //maintain the even head
        ListNode* evenH=even;
        
        while(even!=nullptr and even->next!=nullptr){
            
            
            //change pointer for odd list
            odd->next=odd->next->next;
            odd=odd->next;
            
            
            //change pointer for even list
            even->next=even->next->next;
            even=even->next;
            
            
        }
        
        //assign even list at the end of the odd list
        odd->next=evenH;
        
        return head;
    }
};