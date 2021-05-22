void insert(stack<int>&s , int temp)
{
    if(s.size()==0 || s.top() <=temp)
        {
            s.push(temp);
            return ;
        }
        
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return ;
}

void SortedStack :: sort()
{
   if(s.size()==1)
        return ;
    
    int temp = s.top();
    s.pop();
    sort();
    insert(s,temp);
}