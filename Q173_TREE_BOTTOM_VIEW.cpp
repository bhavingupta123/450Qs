vector <int> bottomView(Node *root)
{
   vector<int> ans,ans2;
        
        map<int, int> m;
        queue<pair< Node* , int>>q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
             pair<Node* , int> temp = q.front();
             q.pop();

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