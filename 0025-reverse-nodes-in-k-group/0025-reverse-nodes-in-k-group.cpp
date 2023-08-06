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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int num=0;
        for(ListNode*curr=head;curr!=NULL;curr=curr->next) num++;
        ListNode*curr=head,*prevfirst=NULL;
        bool isfirstpass=true;
        while(curr!=NULL){
            ListNode*first=curr,*prev=NULL;
            int ct=0;
            if(num<k) {
               prevfirst->next=curr;
               break; 
            }
            while(curr!=NULL&&ct<k){
                ListNode* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                ct++;
                num--;
            }
            if(isfirstpass){
                isfirstpass=false;
                head=prev;
            }
            else{
              prevfirst->next=prev;
            }
            prevfirst=first;
        }
        return head;
    }
};