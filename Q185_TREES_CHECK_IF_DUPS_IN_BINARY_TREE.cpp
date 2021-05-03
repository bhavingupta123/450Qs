string solve(Node* root ,  map<string ,int> &mp ,vector<string> &v )
{
    if(!root)
        return "";
    string s="";
    
    s+=to_string(root->data);
    s+=solve(root->left ,mp ,v);
    s+=solve(root->right , mp,v);
    
    if(mp[s]==1)
        v.push_back(s);
    
    mp[s]++;
    return s;
}

bool dupSub(Node *root)
{
     map<string ,int> mp;
     vector<string> v;
     
     solve(root,mp,v);
     
     if(v.size()==0)
        return 0;
        
    int i;
    for(i=0;i<v.size();++i)
    {
        if(v[i].size()>=2)
            return 1;
    }
    
    return 0;
}