/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode f = head, s = head;
        while (true) {
            if (f == null || f.next == null) return null;
            f = f.next.next;
            s = s.next;
            if (f == s) break;
        }
        s = head;
        while (s != f) {
            f = f.next;
            s = s.next;
        }
        return s;
    }
};