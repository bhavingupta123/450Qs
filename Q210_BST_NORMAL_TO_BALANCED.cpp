void buildtree(Node* root , vector<int> &v)
{
    if(!root)
        return ;
    
    buildtree(root->left,v);
    v.push_back(root->data);
    buildtree(root->right,v);
}

Node* balanced(vector<int> &v , int start , int end)
{
    if(start>end)
        return NULL;
    
    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);
    root->left = balanced(v,start,mid-1);
    root->right = balanced(v,mid+1,end);
   
    return root;
}

Node* buildBalancedTree(Node* root)
{
    vector<int> v;
    
    buildtree(root,v);
    return balanced(v,0,v.size()-1);
}