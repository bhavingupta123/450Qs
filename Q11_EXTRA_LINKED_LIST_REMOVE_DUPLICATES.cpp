//Remove Duplicates in Linked List


/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {

    LLNode* head = new LLNode(-1);
    LLNode* temp = head ,*prev=NULL,*curr=NULL;
    
    unordered_map<int,int> mp;
    
    if(!node)
        return NULL;

    prev=node;
    curr = node->next;
    mp[prev->val]++;

    while(curr)
    {
        if(mp[curr->val])
        {
            prev->next = curr->next;
            curr = curr->next;
        }
        else
        {
            mp[curr->val]++;
            prev = curr;
            curr = curr->next;
        }
 
    }

    return node;

}

/*OR*/

LLNode* solve(LLNode* node) {

    LLNode* temp = node;
    unordered_map<int,int> mp;

    if(!node)
        return NULL;

    mp[temp->val]++;

    while(temp && temp->next)
    {
        if(mp[temp->next->val])
            temp->next = temp->next->next;
        else
        {
            mp[temp->next->val]++;
            temp = temp->next;
        }
    }

    return node;

}