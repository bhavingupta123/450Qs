//https://practice.geeksforgeeks.org/problems/construct-bst-from-post-order/1#

Node * bst(int in[] , int &preindex , int key , int min , int max , int size)
{
    if(preindex==size)
        return NULL;
    
    Node* root =NULL;
    if(key>min && key<max)
    {
        root = new Node(key);
        preindex++;
        
        if(preindex>=0)
        {
            root->left = bst(in,preindex,in[preindex],min,key,size);
            root->right = bst(in,preindex,in[preindex],key,max,size);
        }
    }
    return root;
}

Node *constructTree (int post[], int size)
{
    int in[size],i,j,preindex=0;
    
    for(i=0;i<size;++i)
    {
        in[i]=post[i];
    }
    
    sort(in,in+size);
    
    return bst(in,preindex,in[preindex],INT_MIN,INT_MAX,size);
}