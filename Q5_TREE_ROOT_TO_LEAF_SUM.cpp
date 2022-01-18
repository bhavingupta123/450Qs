//https://practice.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree#

void treepath(Node *root , string pre , long long &sum){
    
    if(root){
        
        if(!root->left && !root->right){
            
            pre+= to_string(root->data);
            
            sum+=stoi(pre);
            
            pre.pop_back();
            
            return ;
        }
        
        pre+=to_string(root->data);
        
        treepath(root->left,pre,sum);
        treepath(root->right,pre,sum);
        
        pre.pop_back();
    }
}

long long treePathsSum(Node *root)
{
    //Your code here
    
    string pre;
    long long sum=0;
    
    treepath(root,pre,sum);
    
    return sum;
}


