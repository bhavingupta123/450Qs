class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        queue<Node* > q;
        
        if(!root)
            return ans;
        
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            ans.push_back(q.front()->data);
            
            while(sz--)
            {
                Node* t = q.front();
                q.pop();
                if(t->right)
                    q.push(t->right);
                if(t->left)
                    q.push(t->left);
            }
        }
        
        return ans;
    }
};