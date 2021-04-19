class Solution
{
    public:
    vector<int> vv;
   
    vector<int> levelOrder(Node* node)
    {
        if(node != NULL)
        {
            queue<Node *> q;
            q.push(node);
        
            while(q.empty()==false)
            {
                Node* node= q.front();
                vv.push_back(node->data);
                q.pop();
                if(node->left)
                    q.push(node->left);
                
                if(node->right)
                    q.push(node->right);
            }
        }
        
        
        return vv;
    }
};