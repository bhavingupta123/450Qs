struct node *last_element_as_first (struct node *head)
    {
        node *slow ,*fast , *curr , *prev , *temp;

       if(head==NULL || head->next==NULL)
        return NULL;

       temp=head;
       prev=head;

       while(temp->next!=NULL)
       {
           prev = temp;
           temp = temp->next;
       }

       prev->next=NULL;
       temp->next = head;
       head=temp;

       return head;
    }