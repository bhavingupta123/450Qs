char flip(char c)
{
    if(c=='0')
        return '1';
    else    
        return  '0';
}

int getflip(string str , char c)
{
    int cnt=0 , i, j ,k;
    
    for(i=0;i<str.length() ; ++i)
    {
        if(str[i]!=c)
            ++cnt;
        
        c = flip(c);
    }
    
    return cnt;
}

int minFlips (string str)
{
    return min(getflip(str, '0'), 
               getflip(str, '1')); 
}