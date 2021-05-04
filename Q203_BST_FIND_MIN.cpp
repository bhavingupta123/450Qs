int minValue(Node* root)
{
    if(root->left)
        minValue(root->left);
    else
        return root->data;
}