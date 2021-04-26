class Solution{
    public:
    
    int index=0;
    
    Node* buildingit(int in[] , int pre[] , int index1 , int index2 , int n)
    {
        if(index1>index2)
            return NULL;
        
        Node * root = new Node(pre[index++]);
        
        if(index1==index2)
            return root;
        
        int searchindex = search(in ,pre , root->data,n);
        
        root->left = buildingit(in,pre,index1 , searchindex - 1,n);
        root->right = buildingit(in,pre,searchindex + 1 , index2,n);
        
        return root;
    }
    
    int search(int in[] , int pre[] , int data , int n)
    {
        int i ;
        
        for(i=0;i<n;++i)
        {
            if(in[i]==data)
                return i;
        }
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        return buildingit(in,pre,0,n-1,n);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}