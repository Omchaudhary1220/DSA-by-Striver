// brute-force solution with time complexity O(2n)
class Solution {
private:
    int size(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* temp=head;
       int n=size(head);
       int mid=(n/2);
       temp=head;
       while(mid--){
           temp=temp->next;
       }
       return temp;
    }
};
// Optimize solution with time complexity O(n)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast&& fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
