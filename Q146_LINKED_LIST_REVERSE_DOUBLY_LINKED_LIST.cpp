Node* reverseDLL(Node * head)
{
    Node *curr = head, *prev = NULL, *next;
    
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        curr->prev = next;
        prev = curr;
        curr = next;
    }
    
    return prev;
    
    
}