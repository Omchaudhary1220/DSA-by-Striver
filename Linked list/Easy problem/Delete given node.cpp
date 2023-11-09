Link:- https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/1095191425/
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        ListNode* remove=node->next;
        node->next=node->next->next;
        delete remove;
    }
};
