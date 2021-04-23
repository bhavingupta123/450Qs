class Solution
{
    public:
    vector<int> ans;
    //Function to return a list containing the inorder traversal of the tree.
    
    int inordertraversal(Node* root)
    {
        if(root!=NULL)
        {
            inordertraversal(root->left);
            ans.push_back(root->data);
            inordertraversal(root->right);
        }
    }
    
    vector<int> inOrder(Node* root)
    {
        inordertraversal(root);
        return ans;
    }
};