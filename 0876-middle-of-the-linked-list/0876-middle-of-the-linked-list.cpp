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
    ListNode* middleNode(ListNode* head) {
        
       
        
        int count=0;
        
        ListNode* temp=head; //declear the temp pointer(Listnodde type)
        
        //count the number of the node
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        
       count=(count/2)+1;
        
        //pointed the head node to the expected node
        for(int i=1;i<count;i++){
            head=head->next;
        }
      
        return head;   //return type is (ListNode)
    };
};