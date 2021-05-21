char* reverse(char *str, int len)
{
    stack<char> s;
    int i,j,k;
    for(i=0;i<len;++i)
    {
        s.push(str[i]);
    }
    
    for(i=0;i<len;++i)
    {
        str[i]=s.top();
        s.pop();
    }
    
    return str;
}