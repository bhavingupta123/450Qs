int largestsumfind(Node* root ,int &sum)
{
	
	if(root==NULL)
		return 0;
	
	int currsum = root->data + largestsumfind(root->left , sum) + largestsumfind(root->right , sum);
	
	ans = max(ans,currsum);
	
	return currsum;
}

int findLargestSubtreeSum(Node *root)
{
	if(root==NULL)
		return 0;
	
	int sum =INT_MIN;
	
	largestsumfind(root,sum);
	
	return sum;
}