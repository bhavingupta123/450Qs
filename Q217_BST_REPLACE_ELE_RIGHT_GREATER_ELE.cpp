Node* insert(Node root , int data , Node* &succ)
{
	if(!root)
		return node = newNode(data);
	
	if(root->data > data)
	{
		succ = node;
		node->left = insert(node->left,data,succ);
	}
	
	else if(root->data < data)
	{
		node->right = insert(node->right , data, succ);
	}
	
	return node;
}

void replace(int n , int arr[])
{
	Node* root =NULL;
	int i,j,k;
	
	for(i=n-1;i>=0;--i)
	{
		Node* succ = NULL;
		root=insert(root,arr[i],succ);
		
		if(succ)
			arr[i]=succ->data;
		else
			arr[i]=-1;
	}
}