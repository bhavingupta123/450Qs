int find(int si , int ei , string str)
{
	int i;
	stack<char> ss;
	
	for(i=si ; i<=ei ; ++i)
	{
		if(str[i]=='(')
			ss.push(str[i]);
		
		else if(str[i]==')')
		{
			if(ss.top()=='(')
				ss.pop();
		}
		
		if(ss.empty())
			return i;
	}
	
	return -1;
}

Node* treeFromString(string str, int si, int ei)
{
	if(si >ei)
		return NULL;
	
	Node* root = newNode(str[si] -'0');
	
	int index=-1;
	
	if(si+1 <=ei && str[si+1]=='(')
		index = find(si+1,ei,str);
	
	if(index!=-1)
	{
		root->left = treeFromString(str,si+2 , index-1);
		root->right = treeFromString(str, index+2 , ei-1);
	}
	
	return root;
}