
void fillnodes(Node* root, unordered_set<int> &all_nodes , unordered_set<int> &leaf_nodes)
{
    if(!root)
        return ;
    
    all_nodes.insert(root->data);
    
    if(root->left==NULL && root->right==NULL)
        leaf_nodes.insert(root->data);
    
    fillnodes(root->left,all_nodes,leaf_nodes);
    fillnodes(root->right,all_nodes,leaf_nodes);
}



bool isDeadEnd(Node *root)
{
    unordered_set<int> all_nodes, leaf_nodes;
    
    fillnodes(root,all_nodes,leaf_nodes);
    all_nodes.insert(0);
    for(auto i = leaf_nodes.begin();i!=leaf_nodes.end();++i)
    {
        int ele = (*i);
        
        if(all_nodes.find(ele + 1)!=all_nodes.end() && all_nodes.find(ele-1)!=all_nodes.end())
            return true;
    }
    
    return false;
    
}