#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node* root=new Node(10);
    root->data=10;
    root->next=new Node(20);
    Node* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
