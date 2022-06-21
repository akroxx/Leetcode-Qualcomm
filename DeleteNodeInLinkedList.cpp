/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *temp = node->next->next;  //Optional LOC 1
        node->next->next = nullptr;         //Optional LOC 2
        node->next = temp;
    }
};