class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string str)
    {
        int i,j,k;
        i=0;int result=0;
        
        stack<int> s;
        
        while(i<str.length())
        {
            if(isdigit(str[i]))
                s.push(str[i]-'0');
            else
            {
					if(s.size()>1)
                {
                    int a = s.top();
                    s.pop();
                    int b = s.top();
                    s.pop();
                    
                    if(str[i]=='*')
                        s.push(a*b);
                    
                    else if(str[i]=='/')
                        s.push(b/a);
                        
                    if(str[i]=='-')
                        s.push(b-a);
                        
                    if(str[i]=='+')
                        s.push(a+b);
                }
            }
            
            ++i;
        }
        
        return s.top();
        
    }
};