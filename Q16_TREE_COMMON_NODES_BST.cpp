//https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=4&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page4category[]Tree

class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    
    void inorder(Node *root, vector<int> &res) {
        
        if(!root) 
            return;
        
        inorder(root->left, res);
        
        res.push_back(root->data);
        
        inorder(root->right, res);
    } 
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
        
        vector<int> v1,v2,v;
        
        inorder(root1,v1);
        inorder(root2,v2);
        
        int i,j,k;
        
        i=0;j=0;
        
        while(i<v1.size() && j<v2.size()){
            
            if(v1[i]==v2[j]){
                
                v.push_back(v1[i]);
                ++i;
                ++j;
            }
            else if(v1[i]>v2[j])
                ++j;
            else
                ++i;
        }
        
        return v;
    }
};