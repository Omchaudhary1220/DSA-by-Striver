/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// brute force solution 
class Solution {
public:
    bool hasCycle(ListNode *head) {
       unordered_map<ListNode*,int>mp;
       ListNode* temp=head;
       while(temp!=NULL){
           mp[temp]++;
           if(mp[temp]>=2){
               return 1;
           }
           temp=temp->next;
       }
       return 0;
    }
};
// optimze solution using slow and fast pointer
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if(head == NULL || head->next == NULL)
            return false;

        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        
        return false; 
    }
};
