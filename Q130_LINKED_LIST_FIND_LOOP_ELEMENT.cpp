struct node *find_loop_element (struct node *head)
    {
        node *slow ,*fast , *curr;
       int i=0;

       if(head==NULL || head->next==NULL)
        return NULL;

       slow=head;
       fast=head;

       slow=slow->next;
       fast=fast->next->next;

       while(slow && fast && fast->next)
       {
           if(slow==fast)
            break;
           slow=slow->next;
           fast=fast->next->next;
       }

       if(slow!=fast)
        return NULL;

       slow=head;

       while(slow!=fast)
       {
           slow=slow->next;
           fast=fast->next->next;
       }

       return slow;
    }