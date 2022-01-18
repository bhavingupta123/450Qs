//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&page=1&query=category[]Treedifficulty[]0difficulty[]1page1category[]Tree


void rec(Node* root, int k , int dis, vector<int> &ans){
    
    if(!root)
        return ;
    
    if(dis==k){
        ans.push_back(root->data);
        return ;
    }
    else{
        dis++;
        rec(root->left,k,dis,ans);
        rec(root->right,k,dis,ans);
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
    int i,j,dis=0;
    vector<int> ans;
    
    rec(root,k,dis,ans);
    
    return ans;
  
}