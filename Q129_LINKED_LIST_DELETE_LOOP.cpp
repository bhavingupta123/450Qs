class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        
        while(slow && fast && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                break;
        }
        
        if(slow == head)
        {
            while(fast->next != slow)
                fast=fast->next;
                
            fast->next=NULL;
        }
        
        
        if(slow == fast)
        {
            slow=head;
            while(slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            
            fast->next=NULL;
        }
    }
};