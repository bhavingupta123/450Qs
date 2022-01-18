//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree

void count(Node* root , int l , int h , int &cnt){
    
    if(!root)
        return ;
    
    if(root->data >=l && root->data<=h){
        
        cnt++;
        count(root->left,l,h,cnt);
        count(root->right,l,h,cnt);
    
    }
    
    else if(root->data > l)
        count(root->left,l,h,cnt);
    else
        count(root->right,l,h,cnt);
    
}

int getCount(Node *root, int l, int h)
{
  // your code goes here  
    int cnt=0;
    
    count(root,l,h,cnt);
    
    return cnt;
  
}