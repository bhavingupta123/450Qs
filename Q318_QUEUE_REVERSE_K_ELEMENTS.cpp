queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    queue<int> qs;
    
    while(k)
    {
        s.push(q.front());
        q.pop();
        k--;
    }
    
    while(!s.empty())
    {
        qs.push(s.top());
        s.pop();
    }
    
    while(!q.empty())
    {
        qs.push(q.front());
        q.pop();
    }
    
    return qs;
}