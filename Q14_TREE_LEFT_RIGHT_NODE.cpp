//https://practice.geeksforgeeks.org/problems/leftmost-and-rightmost-nodes-of-binary-tree/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=3&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page3category[]Tree

void printCorner(Node *root)
{
    if(!root)
        return ;
    
    int i,j,k;
    queue<Node*> q;
    
    vector<int> v;
    q.push(root);
    
    while(!q.empty()){
        
        int i=0;
        int size = q.size();
        int size2 = size;
        
        while(size--){
            
            Node* temp = q.front();
            q.pop();
            
            if(i==0)
                v.push_back(temp->data);
            
            else if(i==size2-1)
                v.push_back(temp->data);
            
            ++i;
            
            if(temp->left)
                q.push(temp->left);
                
            if(temp->right)
                q.push(temp->right);
        }
    }
    
    for(i=0;i<v.size();++i)
        cout<<v[i]<<" ";
}