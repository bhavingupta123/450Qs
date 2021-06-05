//https://binarysearch.com/problems/Next-Greater-Element-of-a-Linked-List
//MEDIUM


void nextgreater(LLNode* node , stack<int> &s)
{
    if(!node)
        return ;
    nextgreater(node->next,s);

    while(!s.empty() && s.top()<=node->val)
        s.pop();
    
    int temp = node->val;
    node->val = s.empty()?0:s.top();

    s.push(temp);
}

LLNode* solve(LLNode* node) {
    
    stack<int> s;
    nextgreater(node,s);
    return node;
}