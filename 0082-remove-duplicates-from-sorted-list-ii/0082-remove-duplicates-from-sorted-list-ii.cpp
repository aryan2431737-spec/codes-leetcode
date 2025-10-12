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
    ListNode* deleteDuplicates(ListNode* head) {
       if (!head || !head->next) return head;

        ListNode* dummy = new ListNode(0); // dummy node to handle edge cases
        dummy->next = head;
        ListNode* prev = dummy;

        while (head) {
            // agar duplicate mile toh skip karna hai
            if (head->next && head->val == head->next->val) {
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = head->next; // skip all duplicates
            } else {
                prev = prev->next; // move forward
            }
            head = head->next;
        }

        return dummy->next;
    }
};
