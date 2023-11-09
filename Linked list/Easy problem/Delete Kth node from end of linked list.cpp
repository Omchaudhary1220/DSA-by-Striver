// brute-force solution is find the size and remove (size-k)th node.
class Solution {
private:
    int Size(ListNode* head){
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=Size(head);
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* temp=dummy;
        for(int i=1;i<=(size-n);i++){
            temp=temp->next;
        }
        ListNode* remove=temp->next;
        temp->next=temp->next->next;
        delete remove;
        return dummy->next;
    }
};
// Optimize solution is using slow and fast pointer approch where slow=fast-k so that we can get kth element
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy=new ListNode(); // Using dummy to reduce seprate code to delete first node
    dummy->next=head;
    ListNode* slow=dummy,*fast=dummy;
    // increase fast till K(n).
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    // after that increase both till fast not reached to last node
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    // when reached means we need to delete the slow node
    ListNode* temp=slow->next;
    slow->next=slow->next->next;
    delete temp;
    return dummy->next; 
    }
};
