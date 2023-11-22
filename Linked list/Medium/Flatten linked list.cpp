Link:- https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1
Node* mergetwolist(Node* first,Node* second){
    Node* temp=new Node(0);
    Node* ans=temp;
    while(first!=NULL&&second!=NULL){
        if(first->data<second->data){
            temp->bottom=first;
            temp=temp->bottom;
            first=first->bottom;
        }
        else{
            temp->bottom=second;
            temp=temp->bottom;
            second=second->bottom;
        }
    }
    if(first) temp->bottom=first;
    else
    temp->bottom=second;
    return ans->bottom;
}
Node *flatten(Node *root)
{
   if(root==NULL ||root->next==NULL){
       return root;
   }
   root->next=flatten(root->next);
   root=mergetwolist(root,root->next);
   return root;
}

