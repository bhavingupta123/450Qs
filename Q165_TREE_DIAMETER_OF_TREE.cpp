class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    
    int height(Node* node)
    {
        if(node==NULL)
            return 0;
        
        return 1 + max(height(node->left),height(node->right));
    }
    
    int diameter(Node* root)
    {
        if(root==NULL)
            return 0;
            
        int lheight,rheight,ldia,rdia;
        
        lheight = height(root->left);
        rheight = height(root->right);
        
        ldia = diameter(root->left);
        rdia = diameter(root->right);
        
        return max(lheight + rheight +1,max(ldia,rdia));
        
    }

};