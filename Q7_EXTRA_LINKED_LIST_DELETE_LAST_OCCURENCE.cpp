//https://binarysearch.com/problems/Linked-List-Delete-Last-Occurrence-of-Value

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int target) {
    
    LLNode*temp=NULL,*head=node;

    while(head->next)
    {
        if(head->next->val == target)
            temp=head;
        head = head->next;
    }

    if(temp==NULL)
    {
        if(node->val==target)
            return node->next;
        else
            return node;
    }

    temp->next = temp->next->next;

    return node;
}