string solve(Node* root , vector<int> &v , map<string,int> &mp)
{
    string s=" ";
    if(!root)
        return "";
    
    s = s + to_string(root->data);
    s = s + solve(root->left ,v , mp);
    s = s + solve(root->right , v ,mp);
    
    if(mp[s]==1)
        v.push_back(root->data);
    
    mp[s]++;
    return s;
}

void printAllDups(Node* root)
{
    map<string,int> mp;
    vector<int> v;
    
    solve(root,v,mp);
    
    if(v.size()==0)
        {
            cout<<-1;
            return ;
        }
    
    sort(v.begin() , v.end());
    
    for(auto it:v)
        cout<<it<<" ";

}