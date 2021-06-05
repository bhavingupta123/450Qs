//https://binarysearch.com/problems/A-Strictly-Increasing-Linked-List
//EASY

bool solve(LLNode* head) {
    
    int ans=INT_MIN;

    while(head!=NULL)
    {
        if(head->val <= ans)
        {
            return false;
        }

        ans = head->val;
        head = head->next;
    }

    return true;
}