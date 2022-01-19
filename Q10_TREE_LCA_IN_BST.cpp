//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1/?category[]=Tree&category[]=Tree&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Treedifficulty[]0difficulty[]1difficulty[]2page2category[]Tree#

void find(Node* root , int ele , vector<Node*> &v){
    
    if(!root)
        return ;
    
    if(ele == root->data){
        
        v.push_back(root);
        return ;
    }
    
    else if(root->data > ele){
        
        v.push_back(root);
        find(root->left , ele , v);
    }
    
    else{

        v.push_back(root);
        find(root->right , ele , v);
    }
}

Node* LCA(Node *root, int n1, int n2)
{
    int i,j,k;
    vector<Node*> v1 , v2;
    map<Node*,int> mp;
    Node*temp = NULL;
    
    if(!root)
        return NULL;
    
    find(root,n1,v1);
    find(root,n2,v2);
    
    for(auto e:v1)
        for(auto f:v2){
            
            if(e->data == f->data){
                
                temp = e;
            }
        }

    return temp;
}