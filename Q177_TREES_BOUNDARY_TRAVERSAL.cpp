int leftnode(Node *root,vector<int> &v)
{
    if(root==NULL)
        return 1;
        
    if(root->left)
    {
        v.push_back(root->data);
        leftnode(root->left , v);
    }
    
    else if(root->right)
    {
        v.push_back(root->data);
        leftnode(root->right , v);
    }
    
}

int leafnode(Node *root , vector<int> &v)
{
    if(root==NULL)
        return 1 ;
    
    leafnode(root->left,v);
    
    if(!(root->right) && !(root->left))
        v.push_back(root->data);
    
    leafnode(root->right,v);
}

int rightnode(Node *root,vector<int> &v)
{
    if(root==NULL)
        return 1;
        
    if(root->right)
    {
        rightnode(root->right , v);
        v.push_back(root->data);
    }
    
    else if(root->left)
    {
        rightnode(root->left , v);
        v.push_back(root->data);
    }
    
}

vector <int> printBoundary(Node *root)
{
    vector<int > vv;
    vv.push_back(root->data);
    leftnode(root->left , vv);
    leafnode(root->left , vv);
    leafnode(root->right , vv);
    rightnode(root->right , vv);
    
    return vv;
    
}