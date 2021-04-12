class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head==NULL && head->next==NULL)
        {
            return head ;
        }
        
        Node *temp=head;
        Node *pre=NULL;
        
        while(temp && temp->next)
        {
            if(temp->data<temp->next->data)
            {
                pre=temp->next;
                temp->data=pre->data;
                temp->next=pre->next;
                temp=head;
            }
        else
        {
            temp=temp->next;
        }
        
    }
    return head;
    }
    
};