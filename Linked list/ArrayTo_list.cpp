Node* constructLL(vector<int>& arr) {
    Node* root=new Node(arr[0]);
    Node* temp=root;
    for(int i=1;i<arr.size();i++){
      temp->next=new Node(arr[i]);
      temp=temp->next;
    }
    return root;
}
