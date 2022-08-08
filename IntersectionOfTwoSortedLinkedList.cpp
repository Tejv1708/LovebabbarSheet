Node* findIntersection(Node* head1, Node* head2)
{
      if(head1 == NULL || head2 == NULL){
        return head1 != NULL ? head1 : head2;
    }
    
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    
    map<int, int> mp;
    
    Node*temp = head1;
    
    while(temp != NULL){
        mp[temp->data]++;
        temp = temp->next;
    }
    
    
    
    temp = head2;
    
    while(temp != NULL){
        if(mp[temp->data] > 0){
            mp[temp->data]--;
            tail->next = new Node(temp->data);
            tail = tail->next;
        }
    
        temp = temp->next;
    }
    
    return dummy->next;

}
