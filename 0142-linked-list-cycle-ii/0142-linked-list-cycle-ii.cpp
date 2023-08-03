class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* entry = head; 

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) {
                while(entry!=slow){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }

        return nullptr;
    }
};

