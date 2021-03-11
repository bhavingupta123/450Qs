int value(char val)
{
    if(val=='I')
        return 1;
        
    else if(val=='V')
        return 5;
        
    else if(val=='X')
        return 10;
        
    else if(val=='L')
        return 50;
        
    else if(val=='C')
        return 100;
        
    else if(val=='D')
        return 500;
        
    else if(val=='M')
        return 1000;
}

int romanToDecimal(string &str) {
    int i  , j , k , n ,sum=0;
    
    n = str.length();
    
    for(i=0 ; i<n-1 ; ++i)
    {
        if(value(str[i]) >= value(str[i+1]))
            sum+= value(str[i]);
        
        else 
            sum-= value(str[i]);
    }
    
    sum += value(str[n-1]);
    
    return sum;
}