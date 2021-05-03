//https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

Node* search(Node* root , int key)
{
	if(root==NULL || root->data == key)
			return root;
	
	if(root->data > key)
		return search(root->left , key);
	else
		return search(root->right , key);
}