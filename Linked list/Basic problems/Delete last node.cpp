Node *deleteLast(Node *list){
  // edge case when list is empty or list has only one element 
   if(list==NULL||list->next==NULL){
       list=NULL;
       return list;
   } 
   Node* temp=list;
  // to reach second last node so that we can delete last node
   while(temp->next->next!=NULL){
       temp=temp->next;
   }
   delete temp->next;
   temp->next=NULL;
   return list;
}
