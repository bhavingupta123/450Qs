void printKPathUtil(Node* root , vector<int> &path , int k)
{
	if(root==NULL)
		return ;
	
	path.push_back(root->data);
	
	printKPathUtil(root->left , path , k);
	printKPathUtil(root->right, path ,k);
	
	int sum=0,i,j,k;
	
	for(i=path.size()-1; i>=0 ;--i)
	{
		sum += path[i];
		
		if(sum == k)
			printpaths(i);
	}
	
	path.pop_back();
}

void printKPath(Node *root, int k)
{
    vector<int> path;
    printKPathUtil(root, path, k);
}