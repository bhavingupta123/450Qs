int preordertraversal(Node* root , vector<int> &ans)
{
    if(root!=NULL)
    {
        ans.push_back(root->data);
        preordertraversal(root->left,ans);
        preordertraversal(root->right,ans);
    }
}

vector <int> preorder(Node* root)
{
    vector<int> ans;
    preordertraversal(root,ans);
    return ans;
}