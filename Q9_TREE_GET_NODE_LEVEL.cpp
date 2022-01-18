//https://practice.geeksforgeeks.org/problems/level-of-a-node-in-binary-tree/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree

class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *root, int target)
    {
    	//code here
        int level=1,ans=0;
        
    	if(!root)
    	    return ans;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	while(!q.empty()){
    	    
    	    int size = q.size();
    	    
    	    while(size--){
    	        
    	        Node* temp = q.front();
    	        q.pop();
    	        
    	        if(temp->data == target)
    	            return level;
    	           
    	        if(temp->left)
    	            q.push(temp->left);
    	           
    	        if(temp->right)
    	            q.push(temp->right);
    	    }
    	    
    	    level++;
    	}
    	 
    	 return ans;
    }
};