//https://www.geeksforgeeks.org/print-paths-root-specified-sum-binary-tree/

int findpathsum(Node *root, int sum , int currsum , verctor<int> &path)
{
	if(root==NULL)
		return 0;
	
	currsum+= root->data;
	
	path.push_back(root->data);
	
	if(currsum == sum)
	{
		printpath(path);
	}
	
	if(root->left)
		findpathsum(root->left , sum , currsum , path);
	
	if(root->right)
		findpathsum(root->right , sum , currsum , path);
	
	path.pop_back(); 
}

void printPaths(Node *root, int sum) 
{ 
    vector<int> path; 
    printPathsUtil(root, sum, 0, path); 
}