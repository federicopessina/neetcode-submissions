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
    bool hasCycle(ListNode* head) {
        set<int> visitedNodes;
        auto& curr = head;

        const bool isOutOfLinkList = false;
        const bool isIndexMinusOne = false;
        const bool isNodeSeen = true;
        const bool error = true; // random value
        
        while (true) {
            if (curr == nullptr) return isOutOfLinkList;
            if (curr->next == nullptr) return isIndexMinusOne;
            if (visitedNodes.contains(curr->val)) return isNodeSeen;
            visitedNodes.insert(curr->val);
            curr = curr->next;
        }

        throw std::logic_error("uncatched case for cycle");
    }
};
