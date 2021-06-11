//https://binarysearch.com/problems/Back-to-Front-Linked-List
//MEDIUM

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    
    LLNode *head,*prev=NULL,*curr=NULL,*temp,*fast=NULL,*slow=NULL,*next=NULL,*first=NULL,*last=NULL;
    int track=1;

    slow = node;
    fast = node;

    while(fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    curr = slow->next;

    while(slow)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    first = node;
    last = prev;
    temp = new LLNode(-1);
    head = temp;
    
    while(first!=last)
    {   
        if(track==1)
        {
            temp->next = last;
            last = last->next;
        }
        else
        {
            temp->next = first;
            first = first->next;
        }

        temp = temp->next;
        track*=-1;
    }

    if(first)
    {
        temp->next = first;
        temp=temp->next;
    }

    temp->next=NULL;

    return head->next;

}