stack<int> ss;

int postorder(Node* root)
{
   queue<Node *> q;
   q.push(root);
   
   while(!q.empty())
   {
       Node* temp=q.front();
       q.pop();
       ss.push(temp->data);
       
       if(temp->right)
            q.push(temp->right);
       if(temp->left)
            q.push(temp->left);
   }
}

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    postorder(root);
    
    while(ss.empty()==false)
    {
        ans.push_back(ss.top());
        ss.pop();
    }
    
    return ans;
}