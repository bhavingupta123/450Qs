//https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree

void store(Node* root ,int &sum){
    
    if(!root)
        return ;
    
    store(root->right,sum);
    
    sum+=root->data;
    root->data = sum;
    
    store(root->left,sum);
    
}

Node* modify(Node *root)
{
    // Your code here
    if(!root || (!root->left && !root->right))
        return root;
        
    int sum=0;    
    store(root,sum);
    
    return root;
    
}