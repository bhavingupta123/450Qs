Node* constructTreeUtil(int pre[], int& preIndex, int key, int min, int max, int size)
{
    if (preIndex==size)
    return NULL;
    
    Node* root = NULL;
    
    if (key > min && key < max)
    {
        root = newNode(key);
        preIndex = preIndex + 1;
        
        if (preIndex >= 0)
        {
            root->left = constructTreeUtil(pre, preIndex, pre[preIndex], min, key, size );
            root->right = constructTreeUtil(pre, preIndex, pre[preIndex], key, max, size );
        }
    }
    return root;
}

Node *constructTree (int pre[], int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre, preIndex, pre[preIndex],
    INT_MIN, INT_MAX, size);
}