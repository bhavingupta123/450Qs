class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       Node *temp=head;
       int arr[3]={0};
       
       while(temp)
       {
            arr[temp->data]++;
            temp = temp->next;
       }
       
       temp=head;
       int i=0;
       while(temp)
       {
           if(arr[i]==0)
            ++i;
            
            else
            {
                temp->data = i;
                arr[i]--;
                temp=temp->next;
            }
       }
       
       return head;
       
        
    }
};