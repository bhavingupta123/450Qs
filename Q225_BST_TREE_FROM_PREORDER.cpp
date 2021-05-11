//https://practice.geeksforgeeks.org/problems/construct-tree-from-preorder-traversal/1#

struct Node* tree(int n , int pre[] , char preLN[] , int *index)
{
    if(*index==n)
        return NULL;
    
    struct Node* nod = new Node(pre[*(index)]);
    
    if(preLN[(*index)++]=='N')
    {
        nod->left = tree(n,pre,preLN,index);
        nod->right = tree(n,pre,preLN,index);
    }
    
    return nod;
}

struct Node *constructTree(int n, int pre[], char preLN[])
{
    int index=0;
    
    return tree(n,pre,preLN,&index);
}