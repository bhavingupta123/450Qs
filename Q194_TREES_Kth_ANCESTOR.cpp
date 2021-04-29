
bool kanc(Node* root ,vector<int> &v,vector<int> &path,int node )
{
    if(!root)
        return false;
    
    path.push_back(root->data);
    
    if(root->data==node)
       {
           for(auto it:path)
            v.push_back(it);
       }
     
    kanc(root->left,v,path,node);
    kanc(root->right,v,path,node);
    
     path.pop_back();
}

bool findancestor(Node* root , int node , vector<int> &path)
{
    if(!root)
        return false;
    
    vector<int> v;
    kanc(root,path,v,node);
    
}

int kthAncestor(Node *root, int k, int node)
{
    if(!root)
        return -1;
        
    vector<int> path;
    findancestor(root,node,path);
    
    if(k>path.size()-1)
        return -1;
        
    return path[path.size()-k-1];
}
