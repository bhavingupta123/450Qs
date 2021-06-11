//https://binarysearch.com/problems/Linked-List-Folding
// MEDIUM

LLNode* solve(LLNode* node) {
    
    LLNode* slow = node , *fast=node;
    stack<int> ss;

    if(!node)
        return NULL;

    while(fast && fast->next)
    {
        ss.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    node = slow;

    if(fast)
        slow = slow->next;

    while(slow && !ss.empty())
    {
        int v = ss.top();
        ss.pop();
        slow->val+=v;
        slow = slow->next;
    }

    return node;
}