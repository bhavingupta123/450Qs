//Reverse Linked List Groups


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