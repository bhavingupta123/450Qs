//https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1#
class Solution
{
    public:
    
    bool findsumexist(Node *root, int sum , int currsum)
    {
        if(root==NULL)
            return false;
            
        currsum += root->data;
        
        if(currsum == sum && !(root->left) && !(root->right))
        {
            return true;
        }
        

        int i=findsumexist(root->left , sum , currsum);
    
        int j=findsumexist(root->right , sum ,currsum);
            
        return i or j;
        
    }
    
    bool hasPathSum(Node *root, int sum) {
        
        return findsumexist(root, sum ,0);   
    }
};