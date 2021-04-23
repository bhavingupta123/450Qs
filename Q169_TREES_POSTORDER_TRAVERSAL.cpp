int postordertraversal(Node* root , vector<int> &ans)
{
    if(root!=NULL)
    {
        postordertraversal(root->left,ans);
        postordertraversal(root->right,ans);
        ans.push_back(root->data);
    }
}

vector <int> postOrder(Node* root)
{
   vector<int> ans;
    postordertraversal(root,ans);
    return ans;
}