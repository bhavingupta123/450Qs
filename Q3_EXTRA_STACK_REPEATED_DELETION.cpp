//https://binarysearch.com/problems/Repeated-Deletion

string solve(string s) {
    
    stack<char> ss;
    int i=0,j,k,n=s.length();
    string ans="";
    
    while(i<n)
    {
        if(ss.empty() || ss.top() !=s[i])
        {
            ans+=s[i];
            ss.push(s[i]);
            ++i;
            if(i>=n)
                break;
        }
        else
        {
            while(s[i]==ss.top())
            {
                ++i;
                if(i>=n)
                    break;
            }

            ss.pop();
            ans.pop_back();
        }
    }
    
    return ans;
}