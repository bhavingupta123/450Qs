//https://practice.geeksforgeeks.org/problems/depth-of-node/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree#

class Solution
{
public:
    int depthOfOddLeaf(Node *root)
    {
        int i,j,k,cnt=0,size=0,level=1,ans=0;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            size = q.size();
            
            while(size--){
                
                Node* temp = q.front();
                q.pop();
                
                if(!temp->left && !temp->right){
                    
                    if(level%2!=0)
                        ans=level;
                }
                
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