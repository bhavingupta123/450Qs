int storezigzag(Node* root , vector<int > &vv)
{
    bool ltr = true;
    
    stack<struct Node*> currentlevel;
    stack<struct Node*> nextlevel;
    
    currentlevel.push(root);
    
    while(!currentlevel.empty())
    {
         struct Node* temp = currentlevel.top();
         currentlevel.pop();
         
         if(temp)
         {
             vv.push_back(temp->data);
             
             if(ltr)
             {
                 if(temp->left)
                    nextlevel.push(temp->left);
                 
                 if(temp->right)
                    nextlevel.push(temp->right);
             }
             
             else
             {
                 if(temp->right)
                    nextlevel.push(temp->right);
                 
                 if(temp->left)
                    nextlevel.push(temp->left);
             }
         }
         
         if(currentlevel.empty())
         {
             ltr = !ltr;
             swap(currentlevel, nextlevel);
         }
    }
}

vector <int> zigZagTraversal(Node* root)
{
    vector<int > vv;
	storezigzag(root,vv);
	return vv;
}