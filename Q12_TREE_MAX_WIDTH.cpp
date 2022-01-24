//https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        
        int i,j,k,cnt=0,maxcnt=0;
        queue<Node*> q;
        
        if(!root)
            return 0;
        
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            
            maxcnt = max(maxcnt,size);
            
            while(size--){
                
                Node* temp = q.front();
                q.pop();
                
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
            }
        }
        
        return maxcnt;
    }
};