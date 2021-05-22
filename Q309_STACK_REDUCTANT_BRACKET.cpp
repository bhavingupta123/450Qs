class Solution {
  public:
    int findMaxLen(string str) {
        
        stack<int> s;
        s.push(-1);
        int ans=0,i;
        
        for(i=0;i<str.length();++i)
        {
            if(str[i]=='(')
                s.push(i);
            else
            {
                if(!s.empty())
                    s.pop();
                
                if(!s.empty())
                    ans = max(ans,i-s.top());
                else
                    s.push(i);
            }
        }
        
        return ans;
    }
};