class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    
    int smallest(Node* root , int K ,  priority_queue<int> &pq)
    {
        if(!root)
            return 0;
        
        smallest(root->left , K,pq);
        
        pq.push(root->data);
        
        if(pq.size()>K)
            pq.pop();
        
        smallest(root->right,K,pq);
    }
    
    int KthSmallestElement(Node *root, int K)
    {
        priority_queue<int> pq;
        
        smallest(root,K,pq);
        
        if(pq.size()==K)
            return pq.top();
        else
            return -1;
    }
};

// 2nd soln

class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    
    void smallest(Node* root , int K , int &c,int &ans)
    {
        if(!root)
            return ;
        
        smallest(root->left ,K,c,ans);
        
        c++;
        if(c==K)
            ans=root->data;

        smallest(root->right,K,c,ans);
    }
    
    int KthSmallestElement(Node *root, int K)
    {
        int c=0,ans=-1;
        
        smallest(root,K,c,ans);
        
        return ans;
    }
};