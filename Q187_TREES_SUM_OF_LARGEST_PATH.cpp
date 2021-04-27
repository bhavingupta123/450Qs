void findsum(Node* root , int len ,int sum,int &maxlen , int &maxsum)
{
    if(!root)
    {
        if(maxlen < len)
        {
            maxlen = len;
            maxsum = sum;
        }
        else if(maxlen == len && maxsum<sum)
            maxsum=sum;
        return ;
    }
    
    findsum(root->left , len+1 , sum + root->data , maxlen , maxsum);
    findsum(root->right , len+1 , sum + root->data , maxlen , maxsum);
    
}

int sumOfLongRootToLeafPath(Node* root)
{
	if(!root)
	    return 0;
	    
	 int maxsum = 0 , len = 0,maxlen=0;
	 
	 findsum(root , 0 , 0 ,maxlen , maxsum);
	 
	 return maxsum;
}