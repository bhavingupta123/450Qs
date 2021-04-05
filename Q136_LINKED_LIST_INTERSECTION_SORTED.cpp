
Node* findIntersection(Node* head1, Node* head2)
{
    unordered_map<int,int>s;
    
    Node *ans = new Node(0);
    Node *dummy = ans;
    
    while(head1!=NULL)
    {
        s[head1->data]++;
        head1=head1->next;
    }
    
    while(head2!=NULL)
    {
        s[head2->data]++;
        
        if(s[head2->data]==2)
        {
            ans->next = new Node(head2->data);
            ans = ans->next;
        }
        
        head2=head2->next;
    }
    
    return dummy->next;
}