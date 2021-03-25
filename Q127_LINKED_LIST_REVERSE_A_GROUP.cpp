
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node *prev ,*next , *curr;
       int i=0;

       prev = NULL;
       curr = head;
       next = NULL;

       if(!head)
            return NULL;

       while(curr!=NULL && i<k)
        {
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
           i++;
        }

       if (next != NULL)
        head->next = reverse(next, k);

        return prev;
    }
};