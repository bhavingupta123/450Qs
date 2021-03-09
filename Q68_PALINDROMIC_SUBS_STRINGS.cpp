int dp[1001][1001];

int ccstr(int i , int j ,string str)
{
    if(i==j)
        return 1;
    
    if(i>j)
        return 0;
    
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    if(str[i]==str[j])
        return dp[i][j]= ccstr(i+1 , j , str) + ccstr(i , j-1 , str) + 1;
    
    else
        return dp[i][j]=ccstr(i+1 , j ,str) + ccstr(i , j-1 , str)  - ccstr(i+1 , j-1 , str);    
}

int countPS(string str)
{
   int n = str.length();
   dp[n][n];
   memset(dp , -1 , sizeof(dp));
   return ccstr(0 , n-1 , str);
}