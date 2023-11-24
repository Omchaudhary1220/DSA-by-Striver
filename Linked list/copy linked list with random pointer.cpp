// Better solution using map
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        Node* ptr=head;
        Node* newlist=new Node(0);
        Node* temp=newlist;
        while(ptr!=NULL){
            temp->next=new Node(ptr->val);
            temp=temp->next;
            mp[ptr]=temp;
            ptr=ptr->next;
        }
        ptr=head;
        temp=newlist->next;
        while(ptr!=NULL){
            temp->random=mp[ptr->random];
            ptr=ptr->next;
            temp=temp->next;
        }
        return newlist->next;
    }
};

// Optimze solution 
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* newnode=new Node(0);
        Node* temp=newnode;
        Node* ptr=head;
        Node* tmp=NULL;
        while(ptr!=NULL){
            tmp=ptr->next;
            ptr->next=new Node(ptr->val);
            ptr=ptr->next;
            ptr->next=tmp;
            ptr=ptr->next; 
            
        }
        ptr=head;
        while(ptr!=NULL){
            if(ptr->random!=NULL){
                ptr->next->random=ptr->random->next;
            }
            ptr=ptr->next->next;
        }
        ptr=head;
        while(ptr!=NULL){
            temp->next=ptr->next;
            ptr->next=ptr->next->next;
            ptr=ptr->next; 
            temp=temp->next;
        }
        return newnode->next;
    }
};
