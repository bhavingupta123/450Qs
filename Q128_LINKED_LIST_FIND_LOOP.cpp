class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* fast = head ;
        Node* slow = head ;
        
        while(slow && fast && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            return 1;
        }
        
        return 0;
    }
};