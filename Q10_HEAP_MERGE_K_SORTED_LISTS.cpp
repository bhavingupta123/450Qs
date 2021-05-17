class Solution{
  public:
    //Function to merge K sorted linked list.
    
    struct compare {
        bool operator()(
            struct Node* a, struct Node* b)
        {
            return a->data > b->data;
        }
    };
    
    
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<Node*, vector<Node*>, compare> pq;
        int i,j,k;
 
        for (i = 0; i < K; i++)
            if (arr[i] != NULL)
                pq.push(arr[i]);
        
        if(pq.empty())
            return NULL;
        
        Node* dummy = new Node(0);
        Node* last = dummy;
        
        while(!pq.empty())
        {
            Node* curr = pq.top();
            pq.pop();
            
            last->next = curr;
            last = last->next;
            
            if(curr->next!=NULL)
                pq.push(curr->next);
        }
       
       return dummy->next;    
    }
};
