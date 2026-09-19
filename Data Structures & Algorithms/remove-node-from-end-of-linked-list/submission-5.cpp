class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr = head;
        ListNode* forward = head;

        // Move forward n nodes ahead
        for (int i = 0; i < n; i++) {
            forward = forward->next;
        }

        // If forward is nullptr, we're removing the head
        if (forward == nullptr) {
            return head->next;
        }

        // Move both pointers until forward reaches the end
        while (forward->next != nullptr) {
            forward = forward->next;
            curr = curr->next;
        }

        // curr is now immediately before the node we want to remove
        curr->next = curr->next->next;

        return head;
    }
};