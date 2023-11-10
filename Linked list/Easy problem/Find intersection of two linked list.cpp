Link:- https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1095988260/
// brute-force solution 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* s1=headA,*s2=headB;
        while(s1!=NULL){
            s2=headB;
            while(s2!=NULL){
                if(s1==s2){
                    return s1;
                }
                s2=s2->next;
            }
            s1=s1->next;
        }
        return NULL;
        
    }
};
// better solution 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>mp;
        ListNode* s1=headA,*s2=headB;
        while(s1!=NULL){
            mp[s1]++;
            s1=s1->next;
        }
        while(s2!=NULL){
            mp[s2]++;
            if(mp[s2]>=2){
                return s2;
            }
            s2=s2->next;
        }
        return NULL;
    }
};
// optimze solution1
class Solution {
private:
    vector<int> Size(ListNode *headA, ListNode *headB){
        vector<int>count(2,0);
        ListNode* s1=headA,*s2=headB;
        while(s1!=NULL||s2!=NULL){
            if(s1!=NULL){
                count[0]++;
                s1=s1->next;
            }
            if(s2!=NULL){
                count[1]++;
                s2=s2->next;
            }
        }
        return count;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       vector<int>n=Size(headA,headB);
       int move=0;
       move=(n[0]>n[1])?1:2;
       ListNode* s1=headA,*s2=headB;
       for(int i=1;i<=abs(n[0]-n[1]);i++){
           if(move==1) s1=s1->next;
           else
           s2=s2->next;
       }
       while(s1!=NULL&&s2!=NULL){
           if(s1==s2){
               return s1;
           }
           s1=s1->next;
           s2=s2->next;
       }
       return NULL;
    }
}; 
// optimize solution2
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* s1=headA,*s2=headB;
        while(s1!=s2){
           s1=(s1==NULL)?headB:s1->next;
           s2=(s2==NULL)?headA:s2->next;
        }
        return s1;
    }
};
