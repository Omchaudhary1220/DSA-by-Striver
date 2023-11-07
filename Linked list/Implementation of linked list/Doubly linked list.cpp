#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next, *prev;
    Node() {
        this->next = this->prev = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = this->prev = NULL;
    }
};

void insert_begin(Node* &root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = root;
    root->prev = newnode;
    root = newnode;
}
void insert_end(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return;
    }
    Node* temp=root;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode=new Node(data);
    newnode->prev=temp;
    temp->next=newnode;
}
void insert_position(Node* &root,int pos,int data){
    if(pos<=0){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos==1){
        insert_begin(root,data);
        return;
    }
    Node* secondprev=NULL;
    Node* temp=root;
    for(int i=1;i<pos;i++){
        secondprev=temp;
        if(secondprev==NULL){
            cout<<"previous position is not there\n";
            return;
        }
        temp=temp->next;
    }
    Node* newnode=new Node(data);
    newnode->prev=secondprev;
    newnode->next=secondprev->next;
    secondprev->next->prev=newnode;
    secondprev->next=newnode;
}
void display(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node* last(Node* root){
    Node* temp=root;
    if(root==NULL) return root;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}
void display_reverse(Node* root){
    Node* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}
int main() {
    Node* root = NULL;
    int choice, data,pos;
    Node* tail=NULL;
	cout << "1. Insert at the beginning\n";
	cout<<"2.Insert at end\n";
	cout<<"3.Insert at specified position\n";
    cout <<"4. Display\n";
    cout<<"5. Display in reverse form\n";
    cout<<"6.Delete at the beginning\n";
    cout<<"7.Delete at end\n";
    cout<<"8.Delete at specified position\n";
    cout << "9. Exit\n";
    while (true) {
        cout << "Enter your choice:";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert at begin: ";
                cin >> data;
                insert_begin(root, data);
                tail=last(root);
                display(root);
                break;
            case 2:
                cout << "Enter data to insert at end: ";
                cin >> data;
                insert_end(root,data);
                tail=last(root);
                display(root);
                break;
            case 3:
               cout << "Enter data to insert at position: ";
               cin >> data;
               cout<<"Enter position for new node:";
               cin>>pos;
               insert_position(root,pos,data);
               tail=last(root);
               display(root);
               break;
            
            case 4:
                cout << "List next elements: ";
                display(root);
                break;
            case 5:
                cout<<"list previous elements:";
                display_reverse(tail);
                break;
            case 9:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
