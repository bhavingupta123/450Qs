Node* insert(Node* node, int data)
{
    if (node==NULL)
    {
        node = new Node(data);
        return node;
    } 
    
    else if (data < node->data)
        node->left = insert(node->left, data);
        
    else if (data > node->data)
        node->right = insert(node->right, data);
    
    return node;
}