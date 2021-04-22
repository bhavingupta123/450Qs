int filldiagonal(Node *root , int level ,map<int , vector<int>> &mp)
{
    if(root)
    {
        mp[level].push_back(root->data);
        filldiagonal(root->left , level+1 , mp);
        filldiagonal(root->right , level , mp);
    }
}


vector<int> diagonal(Node *root)
{
    map<int , vector<int>> mp;
    filldiagonal(root,0,mp);
    vector<int> res;
    for(auto index:mp)
    {
        for(int x:index.second)
        {
            res.push_back(x);
        }
    }
    
    return res;
}