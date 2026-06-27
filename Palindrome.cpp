bool isPalindrome(Node* head){
    stack<int>s;
    Node* ptr = head;
    while(ptr!=NULL){
        s.push(ptr->data);
        ptr = ptr->next;
    }
    ptr=head;
    
    while(!s.empty()){
        int topVal = s.top();
        s.pop();
        if(topVal!=ptr->data){
            return false;
        }
        ptr=ptr->next;
    }
    return true;
}