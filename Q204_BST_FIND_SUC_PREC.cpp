void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root)
        return ;
        
    if(root->key == key)
    {
        if(root->left)
        {
             Node* tmp = root->left;
             while(tmp->right)
                tmp=tmp->right;
            pre = tmp;
        }
        
        if(root->right)
        {
             Node* tmp = root->right;
             while(tmp->left)
                tmp=tmp->left;
            suc = tmp;
        }
        
        return ;   
    }
    
    if(key < root->key)
    {
        suc = root;
        findPreSuc(root->left, pre,suc,key);
    }
    
    else
    {
        pre = root;
        findPreSuc(root->right, pre,suc,key);
    }
}