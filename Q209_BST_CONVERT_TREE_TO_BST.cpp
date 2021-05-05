class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void traversal(Node* root , vector<int> &v)
    {
        if(!root)
            return ;
        
        traversal(root->left,v);
        v.push_back(root->data);
        traversal(root->right,v);
    }
    
    void store(Node* root , vector<int> &v)
    {
        if(!root)
            return ;
        
        store(root->left,v);
        root->data = v.back();
        v.pop_back();
        store(root->right,v);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        traversal(root,v);
        sort(v.begin(),v.end());
        
        reverse(v.begin() , v.end());
        store(root,v);
        
        return root;
        
    }
};