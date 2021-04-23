class Solution
{
    public:
    
    int sum(Node* root)
    {
        if (root == NULL)
            return 0;
         
        return sum(root->left) + root->data +
               sum(root->right);
    }
    
    bool isSumTree(Node* node)
    {
         int ls ,rs ;
         
         if(node ==NULL || node->left == NULL || node->right==NULL)
         {
             return 1;
         }
         
          ls = sum(node->left);
          rs = sum(node->right);
 
        if ((node->data == ls + rs) &&
              isSumTree(node->left) &&
              isSumTree(node->right))
            return 1;
 
        return 0;
         
    }
};