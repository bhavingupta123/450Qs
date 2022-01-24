//https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree

class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    
    void findmin(Node* root , int K , int &minans){
        
        if(!root)
            return ;
        
        int dif = abs(K - root->data);
        minans = min(dif,minans);
        
        if(K > root->data)
            findmin(root->right,K,minans);
        else if(K < root->data)
            findmin(root->left,K,minans);
        else 
            return ;
    }
    
    int minDiff(Node *root, int K)
    {
        //Your code here
        
        if(!root)
            return 0;
            
        
        int i,j,k,mindif=0,minans=INT_MAX;
        
        findmin(root,K,minans);
        
        return minans;
    }
};
