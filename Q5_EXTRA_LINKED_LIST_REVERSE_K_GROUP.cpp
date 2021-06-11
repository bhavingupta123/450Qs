//Linked List REVERSE K GROUPS
//https://binarysearch.com/problems/Reverse-Linked-List-Groups
//MEDIUM


LLNode* solve(LLNode* node, int k) {
    
    int cnt=k;
    stack<LLNode *> s;
    LLNode *temp2=NULL , *curr=NULL;

    if(!node || !node->next )
        return node;

    while(node && cnt)
    {
        LLNode *temp = node;
        node = node->next;
        temp->next = NULL;
        s.push(temp);
        cnt--;
    }

    curr = s.top();
    temp2 = s.top();
    s.pop();

    while(s.size())
    {
        curr->next = s.top();
        s.pop();
        curr = curr->next;
    }

    if(node)
    {
        curr->next = solve(node,k);
    }

    return temp2;

}

/*OR*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int k) {
    
    int cnt=k;
    stack<LLNode*> s;
    LLNode *temp=NULL,*head=NULL,*curr=NULL,*prev=NULL;

    if(!node || !node->next)
        return node;
        
    curr = node;

    while(curr)
    {
        cnt = 0;
        stack<LLNode*> s;

        while(curr && cnt<k)
        {
            s.push(curr);
            curr = curr->next;
            cnt++;
        }

        while(!s.empty())
        {
            if(prev==NULL)
            {
                prev = s.top();
                head = prev;
                s.pop();
            }
            else
            {
                prev-> next = s.top();
                s.pop();
                prev = prev->next;
            }
        }
    }

    prev->next = NULL;

    return head;

}