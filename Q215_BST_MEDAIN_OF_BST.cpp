//https://practice.geeksforgeeks.org/problems/median-of-bst/1#

void storev(struct Node *root , vector<int> &v)
{
    if(!root)
        return ;
    
    storev(root->left , v);
    v.push_back(root->data);
    storev(root->right , v);
}

float findMedian(struct Node *root)
{
      vector<int> v;
      storev(root,v);
      
      if(v.size()%2==0)
        return (v[v.size()/2] + v[v.size()/2 -1] )/2.0;
      else
        return v[v.size()/2];    
}