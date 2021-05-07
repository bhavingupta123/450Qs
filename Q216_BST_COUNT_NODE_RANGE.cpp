void total(Node *root,int l,int h,int &cnt)
{
    if(!root)
        return ;
        
    if(root->data >=l && root->data <=h)
    {
        cnt++;
        total(root->left,l,h,cnt);
        total(root->right,l,h,cnt);
    }
    
    else if(root->data > l)
        total(root->left,l,h,cnt);
    else
        total(root->right,l,h,cnt);
}

int getCount(Node *root, int l, int h)
{
  int cnt=0;
  
  total(root,l,h,cnt);
  
  return cnt;
}