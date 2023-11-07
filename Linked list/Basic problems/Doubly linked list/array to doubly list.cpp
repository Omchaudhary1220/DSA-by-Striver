/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    Node* root,*temp;
    root=temp=NULL;
    for(int i=0;i<arr.size();i++){
        if(i==0){
            root=new Node(arr[i]);
            temp=root;
            continue;
        }
        temp->next=new Node(arr[i]);
        temp->next->prev=temp;
        temp=temp->next;
    }
    return root;
}
