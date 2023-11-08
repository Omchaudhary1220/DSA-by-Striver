// Brute-force solution with space complexity O(n) and t.c=O(n)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* s1=list1;
        ListNode* s2=list2;
        while(s1!=NULL&&s2!=NULL){
            if(s1->val<=s2->val){
                temp->next=s1;
                s1=s1->next;
                temp=temp->next;
            }
            else{
                temp->next=new ListNode(s2->val);
                s2=s2->next;
                temp=temp->next;
            }
        }
        while(s1!=NULL){
            temp->next=new ListNode(s1->val);
            s1=s1->next;
            temp=temp->next;
        }
        while(s2!=NULL){
            temp->next=new ListNode(s2->val);
            s2=s2->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};
// Optimize solution with space complexity O(1) and t.c=O(n)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* s1=list1;
        ListNode* s2=list2;
        while(s1!=NULL&&s2!=NULL){
            if(s1->val<=s2->val){
                temp->next=s1;
                s1=s1->next;
                temp=temp->next;
            }
            else{
                temp->next=s2;
                s2=s2->next;
                temp=temp->next;
            }
        }
        while(s1!=NULL){
            temp->next=s1;
            s1=s1->next;
            temp=temp->next;
        }
        while(s2!=NULL){
            temp->next=s2;
            s2=s2->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};

