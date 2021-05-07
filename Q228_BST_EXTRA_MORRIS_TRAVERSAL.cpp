// MORRIS TRAVERSAL --> INORDER TRAVERSAL
// https://www.youtube.com/watch?v=BuI-EULsz0Y&ab_channel=FitCoder
//https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/

// traverse in 0(1) space

Node* predecessor(Node* next , Node* curr)
{
	while(next->right!=NULL && next->right!=curr)
		next=next->right;

	return next;
}

void morris(Node* root)
{
	if(!root)
		return ;

	Node* curr = root , *prev;
	
	while(curr!=NULL)
	{
		if(curr->left==NULL)
		{
			cout<<curr->data<<" ";
			curr=curr->right;
		}
		
		else
		{
			pred = predecessor(curr->left , curr);
			
			if(pred->right==NULL)
			{
				pred->right = curr;
				curr = curr->left;
			}
			else
			{
				pred->right = NULL;
				cout<<curr->data<<" ";
				curr = curr->right;
			}
		}
	}
}