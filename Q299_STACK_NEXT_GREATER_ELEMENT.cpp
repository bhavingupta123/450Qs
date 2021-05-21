vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> ans(n,0);
        stack<long long> s;
        
        s.push(arr[n-1]);
        ans[n-1]=-1;
        
        for(long long i=n-2 ; i>=0;--i)
        {
            while(s.empty()==false && s.top()<=arr[i])
            {
                s.pop();
            }
            
            long long  store = s.empty() ? (-1):s.top();
            
            ans[i]=store;
            s.push(arr[i]);
        }
        
        return ans;
    }