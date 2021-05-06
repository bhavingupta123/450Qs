int find(Node*root , int k)
{
    if(!root)
        return 0;
    
    if(root->data == k)
        return 1;
        
    if(root->data > k)    
        find(root->left,k);
    else
        find(root->right,k);
}

int traverse(Node* root1, Node* root2, int x , int &cnt)
{
    if(!root1)
        return 0;
    
    traverse(root1->left,root2,x,cnt);
    if(find(root2,x - root1->data))
        ++cnt;
    traverse(root1->right,root2,x,cnt);
}

int countPairs(Node* root1, Node* root2, int x)
{
    int cnt=0;
    traverse(root1,root2,x,cnt);
    
    return cnt;
}