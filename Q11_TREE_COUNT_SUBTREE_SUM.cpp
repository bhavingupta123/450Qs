//https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree#

int cntSum(Node* root , int X , int &count){
    
    if(!root)
        return 0;
    
    int ls = cntSum(root->left,X,count);
    int rs = cntSum(root->right,X,count);
    
    int sum = ls + rs + root->data;
    
    if(sum == X)
        ++count;
    
    return sum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	
	int ls,rs,count=0;
	
	ls = cntSum(root->left,X,count);
	rs = cntSum(root->right,X,count);
	
	if((root->data + ls + rs) == X)
	    ++count;
	    
	return count;
	
}

/*OR*/

int helper(Node *root,int X,int &x) {
	
    if(!root) 
		return 0;
    
	else if(!root->left and !root->right and root->data == X) {
        x++;
        return X;
    } 
    
    int sum = root->data + helper(root->left,X,x) + helper(root->right,X,x);
    
    if(sum == X) 
		x++;
    
    return sum;
    
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int countNumber = 0;
	
	helper(root,X,countNumber);
	
	return countNumber;
}