//https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1

Node* smallest(Node* node)
{
    Node* current = node;
 
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
//Function to delete a node from BST.
Node *deleteNode(Node *root,  int data)
{
    if(!root)
        return NULL;
    
    if(root->data > data)
        deleteNode(root->left , data);
    
    else if(root->data < data)
        deleteNode(root->right , data);
    
    else 
    {
        if(!root->left && !root->right)
            return NULL;
        
        else if(!root->left)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        
        else if(!root->right)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        
        Node* temp = smallest(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right , temp->data);
    }
    
    return root;
}
