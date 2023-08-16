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
    ListNode* insertionSortList(ListNode* head) { 
   
            
   if (!head || !head->next) {
            return head; // Empty list or list with only one node is already sorted
        }
        
        ListNode* dummy=new  ListNode(10000) ; // Create a dummy node to simplify insertion
        ListNode* current = head; // Pointer to traverse the original list
        
        while (current) {
            ListNode* prev = dummy; // Pointer to traverse the sorted list
            ListNode* nextNode = current->next; // Store the next node before modifying links
            
            // Find the correct position to insert the current node
            while (prev->next && prev->next->val < current->val) {
                prev = prev->next;
            }
            
            // Insert the current node after the 'prev' node
            current->next = prev->next;
            prev->next = current;
            
            // Move to the next node in the original list
            current = nextNode;
        }
        
        return dummy->next; // Return the sorted list
        
    
    }
};