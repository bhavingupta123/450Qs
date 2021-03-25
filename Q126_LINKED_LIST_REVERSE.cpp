// reverse singly linked list using iteration

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
       Node *prev ,*next , *curr;
       
       prev = NULL;
       curr = head;
       
       while(curr!=NULL)
        {  next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       
        }
        
        head = prev;
    }
    
};


// using recursion

class Solution
{
    public:
    //Function to reverse a linked list.
    
    struct Node* rev(struct Node *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        
        Node* nextnode = rev(head->next);
        
        head->next->next= head;
        head->next=NULL;
        
        return nextnode;
    }
    
    struct Node* reverseList(struct Node *head)
    {
       
        head = rev(head);
    }
    
};

// recursion

class Solution
{
    public:
    //Function to reverse a linked list.
    
    struct Node* reverseList(struct Node *head)
    {
       
       if(head==NULL || head->next==NULL)
            return head;
        
        Node* nextnode = reverseList(head->next);
        
        head->next->next= head;
        head->next=NULL;
        
        head= nextnode;
    }
    
};