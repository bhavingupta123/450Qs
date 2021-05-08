bool findlargest(Node* root , int min , int max)
{
    if(!root)
        return true;
    
    if(root->data < min || root->data > max)
        return false;
    
    return (findlargest(root->left , min , root->data-1) && findlargest(root->right ,root->data+1 ,max));
}

int size(Node* root)
{
    if(!root)
        return 0;
    
    return size(root->left) + 1 + size(root->right);
}

int largestBst(Node *root)
{
 
    if(findlargest(root,INT_MIN,INT_MAX))
        return size(root);
    
    return max(largestBst(root->left),largestBst(root->right));
}