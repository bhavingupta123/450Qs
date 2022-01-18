//https://practice.geeksforgeeks.org/problems/symmetric-tree/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree#

class Solution{
    public:
  
    bool ischeck(Node* root1 , Node* root2){
        
        if(!root1 && !root2)
            return true;
        
        if(!root1 || !root2)
            return false;
        
        if(root1->data == root2->data)
        {
            return ischeck(root1->left , root2->right) && ischeck(root1->right,root2->left);
        }
        
        return false;
    }
    
    bool isSymmetric(struct Node* root)
    {
	    if(!root)
	        return true;
	       
	    return ischeck(root->left,root->right);
	    
    }
};