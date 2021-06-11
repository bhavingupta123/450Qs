//https://binarysearch.com/problems/Reverse-an-Inner-Linked-List
//MEDIUM


LLNode* solve(LLNode* node, int start, int stop) {
    
    LLNode temp={0,node},*prev=NULL,*next=NULL,*curr=&temp;

    int i,j,k;

    if(!node || !node->next)
        return node;
    
    i=0;
    curr=&temp;

    while(i<=start && curr)
    {
        prev = curr;
        curr=curr->next;
        ++i;
    }
    
    //cout<<curr->val<<" "<<prev->val;
    if(!curr)
        return node;

    LLNode *ni = curr, *ni_1 = prev;

    i=start;

    while(i<=stop && curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        ++i;
    }
    
    ni_1->next = prev;
    ni->next = curr;

    return temp.next;
}