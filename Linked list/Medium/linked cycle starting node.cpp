Link:- https://leetcode.com/problems/linked-list-cycle-ii/description/
// brute force solution using set
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        ListNode* temp=head;
        while(temp!=NULL){
            if(st.find(temp)!=st.end()) return temp;
            st.insert(temp);
            temp=temp->next;
        }
        return NULL;
    }
};

// optimized solution using floyd cycle detect algorithm

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL ||fast->next==NULL) return NULL;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};
