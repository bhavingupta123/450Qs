//https://practice.geeksforgeeks.org/problems/remove-half-nodes/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree

Node *RemoveHalfNodes(Node *root)
{
    if(!root)
        return NULL;
    
    root->left = RemoveHalfNodes(root->left);
    root->right = RemoveHalfNodes(root->right);
    
    if(!root->left && !root->right)
        return root;
    
    if(!root->left){
        
        Node* newnode = root->right;
        return newnode;
    }
    
    if(!root->right){
        
        Node* newnode = root->left;
        return newnode;
    }
    
    return root;
    
}