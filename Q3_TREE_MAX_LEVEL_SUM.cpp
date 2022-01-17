//https://practice.geeksforgeeks.org/problems/max-level-sum-in-binary-tree/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=1&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page1category[]Tree

class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        
        int i,j,k,sum=0,maxsum=INT_MIN;
        queue<Node*> q;
        
        q.push(root);
		
        while(!q.empty()){
            
            int size = q.size();
            sum=0;
            
            while(size--){
                
                Node* temp = q.front();
                q.pop();
                
                sum+=temp->data;
                
                if (temp->left != NULL)
                    q.push(temp->left);
                    
                if (temp->right != NULL)
                    q.push(temp->right);
            }
            
            maxsum = max(maxsum,sum);
            
        }
        
        return maxsum;
    }
};