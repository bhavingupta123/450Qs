class Solution{
  public:
    // function should print the topView of the binary tree
    vector<int> topView(struct Node *root)
    {
        vector<int> ans,ans2;
        
        map<int, int> m;
        queue<pair< Node* , int>>q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
             pair<Node* , int> temp = q.front();
             q.pop();
             
             if(!m.count(temp.second))
                m[temp.second] = temp.first->data;
            
            if(temp.first->left)
                q.push({temp.first->left,temp.second - 1});
            
            if(temp.first->right)
                q.push({temp.first->right,temp.second + 1});
        }
        
        for(auto x:m)
            ans.push_back(x.second);
    
        return ans;
    }

};