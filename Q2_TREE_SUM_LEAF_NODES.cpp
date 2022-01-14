//https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&page=1&query=category[]Treedifficulty[]0difficulty[]1page1category[]Tree


int leaf(Node* root , int &sum){
    
    if(!root)
        return NULL;
    
    if(!root->left && !root->right){
        
        sum+=root->data;
    }
    
    if(root->left)
        leaf(root->left,sum);
    
    if(root->right)
        leaf(root->right,sum);
        
}

int sumLeaf(Node* root)
{
    if(!root)
        return 0;
    
    if(!root->left && !root->right)
        return root->data;
    
    int sum=0;
    
    leaf(root,sum);
    
    return sum;
}