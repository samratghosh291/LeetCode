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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr or head->next==nullptr){
            return nullptr;
        }
        
        //count the no. of node
        int count=0;
        ListNode* temp=head;
        
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        
        
        int n=(count/2);
        temp=head;
        ListNode* prev=nullptr;
        
        for(int i=0;i<n;i++){
            
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        
        return head;
        
    }
};