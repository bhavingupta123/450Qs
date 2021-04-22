int balanced(Node *root , int* height)
{
    int l=0,r=0,lh=0,rh=0;
    
    if(root==NULL)
    {
        *height=0;
        return 1;
    }
    
    l = balanced(root->left,&lh);
    r = balanced(root->right,&rh);
    
    *height = (lh>rh? lh:rh)+1;
    
    if(abs(lh-rh)>=2)
        return 0;
        
    else
        return l && r;
}

bool isBalanced(Node *root)
{
    int height=0;
    
    return balanced(root,&height);

}