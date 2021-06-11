//https://binarysearch.com/problems/Minimum-Bracket-Addition

int solve(string s) {
    
    int i,j,k,cnt=0,extra=0;

    for(i=0;i<s.length();++i)
    {   
        if(!cnt && s[i]==')')
            ++extra;
        else if(s[i]=='(')
            ++cnt;
        else
            --cnt;
    }

    return cnt + extra;
}