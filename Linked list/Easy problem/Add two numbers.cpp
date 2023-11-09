Link:- https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum=new ListNode();
        ListNode* temp=sum;
        ListNode* list1=l1,*list2=l2;
        int carry=0;
        while(list1!=NULL&&list2!=NULL){
            int sum=list1->val+list2->val+carry;
            carry=0;
            if((sum/10)>0) carry=1;
            temp->next=new ListNode(sum%10);
            list1=list1->next;
            list2=list2->next;
            temp=temp->next;
        }
        while(list1!=NULL){
            int sum=list1->val+carry;
            carry=0;
            if((sum/10)>0) carry=1;
            temp->next=new ListNode(sum%10);
            list1=list1->next;
            temp=temp->next;
        }
        while(list2!=NULL){
            int sum=list2->val+carry;
            carry=0;
            if((sum/10)>0) carry=1;
            temp->next=new ListNode(sum%10);
            list2=list2->next;
            temp=temp->next;
        }
        if(carry==1) temp->next=new ListNode(carry);
        return sum->next;
    }
};
// solution after removing extra repetative lines
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(); 
        ListNode *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->val; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> val; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }
};
