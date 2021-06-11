//Add Linked Lists

LLNode* solve(LLNode* l0, LLNode* l1) {
    
    int i,j,k,val,carr=0,sum;
    LLNode *head = new LLNode(0);
    LLNode *res = head;

    while(l0 || l1 || carr)
    {
        sum = carr + (l0?l0->val:0) + (l1? l1->val:0);
        carr = sum/10;
        sum = sum%10;

        res->next = new LLNode();
        res = res->next;
        res->val = sum;

        if(l0)
            l0 = l0->next;
        
        if(l1)
            l1 = l1->next; 

    }

    return head->next;
}