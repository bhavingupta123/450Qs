void reverse(queue<int> &q)
{
    if(q.size()==0)
        return ;
    
    int a = q.front();
    q.pop();
    reverse(q);
    q.push(a);
}
queue<int> rev(queue<int> q)
{
    reverse(q);
    
    return q;    
}

/* OR 2nd soln*/

queue<long long int> rev(queue<long long int> q)
{
    stack<long long int>s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    
    return q;
}