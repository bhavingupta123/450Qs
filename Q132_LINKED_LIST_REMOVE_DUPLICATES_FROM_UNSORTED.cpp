class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        Node *slow,*temp,*prev;
        temp=head;
        prev=head;
        unordered_set<int> uset;
        
        while(temp)
        {
            if (uset.find(temp->data) != uset.end())
                prev->next = temp->next;
 
         else
            {
                uset.insert(temp->data);
                prev= temp;
            }
            
            
            temp = temp->next;
        }
        
        prev->next=NULL;
        
        return head;
    }
};