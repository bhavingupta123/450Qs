//https://binarysearch.com/problems/Linked-List-Partitioning
//MEDIUM

LLNode* solve(LLNode* node, int k) {
    
    LLNode *l1 = new LLNode(-1),*l2= new LLNode(-1),*l3= new LLNode(-1);
    LLNode *left=l1,*mid=l2,*right=l3;


    while(node)
    {
        if(node->val < k)
        {
            left->next = node;
            left = left->next;
        }

        else if(node->val == k)
        {
            mid->next = node;
            mid = mid->next;
        }

        else
        {
            right->next = node;
            right = right->next;
        }

        node = node->next;
    }

    right->next=NULL;
    left->next = l2->next;
    mid->next = l3->next;
    
    return l1->next;
    
}