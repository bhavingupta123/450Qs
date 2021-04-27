
class Solution{
  public:
    /*You are required to complete this method*/
    
    int checkfunc(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        int level=0, final=INT_MAX;
        
        while(!q.empty())
        {
            int size = q.size();
            level+=1;
            
            while(size>0)
            {
                Node* temp = q.front();
                q.pop();
                
                if(temp->left)
                {
                    q.push(temp->left);
                    
                    if(!temp->left->right && !temp->left->left)
                    {
                        if(final==INT_MAX)
                            final = level;
                            
                        else if(final!=level)
                            return 0;
                    }
                }
                
                if(temp->right)
                {
                    q.push(temp->right);
                    
                    if(!temp->right->right && !temp->right->left)
                    {
                        if(final==INT_MAX)
                            final = level;
                            
                        else if(final!=level)
                            return 0;
                    }
                }
                
                size-=1;
            }
        }
        
        return 1;
        
    }
    
    bool check(Node *root)
    {
       checkfunc(root);
    }
};