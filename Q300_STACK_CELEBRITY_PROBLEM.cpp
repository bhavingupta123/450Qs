class Solution 
{
    public:
    int knows(int a , int b ,vector<vector<int> >& M )
    {
        return M[a][b];
    }
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i,j,k;
        
        stack<int> s;
        for(i=0;i<n;++i)
            s.push(i);
        
        while(s.size()>1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(knows(a,b,M))
                s.push(b);
            else
                s.push(a);
        }
        
        if(s.empty())
            return -1;
        
        int c = s.top();
        s.pop();
        
        for(i=0;i<n;++i)
        {
            if((i!=c) && (!knows(i,c,M) || knows(c,i,M)))
                return -1;
        }
        
        return c;
    }
};