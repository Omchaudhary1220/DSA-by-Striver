Link:- https://leetcode.com/problems/rotate-list/
class Solution {
private:
    int size(ListNode* head,ListNode*& tail ){
        int count=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
            count++;
            if(ptr->next==NULL){
                tail=ptr;
            }
            ptr=ptr->next;
        }
        return count;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL) return head;
        ListNode* tail=NULL;
        int n=size(head,tail);
        k=k%n;
        if(k==0) return head;
        ListNode* ptr=head;
        for(int i=1;i<(n-k);i++){
            ptr=ptr->next;
        }
        ListNode* temp=ptr->next;
        ptr->next=NULL;
        tail->next=head;
        head=temp; 
        return head;
    }
};
