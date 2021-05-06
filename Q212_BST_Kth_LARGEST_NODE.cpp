class Solution
{
    public:
    
    void largest(Node*root, int K , priority_queue <int, vector<int>, greater<int> > &pq)
    {
        if(!root)
            return ;
            
        largest(root->left,K,pq);
        
        pq.push(root->data);
        
        if(pq.size()>K)
            pq.pop();
        
        largest(root->right,K,pq);
        
        
    }
    
    int kthLargest(Node *root, int K)
    {
        priority_queue <int, vector<int>, greater<int> > pq;
        
        largest(root,K,pq);
        return pq.top();
        
    }
};

//2nd soln

class Solution
{
    public:
    
    void largest(Node*root, int K , int &c ,int &ans)
    {
        if(!root || c>=K)
            return ;
        
        largest(root->right,K,c,ans);
        c++;
        
        if(c==K)
            ans= root->data;
        
        largest(root->left,K,c,ans);
    }
    
    int kthLargest(Node *root, int K)
    {
       int c=0,ans=0;
       largest(root,K,c,ans);
       
       return ans;
    }
};