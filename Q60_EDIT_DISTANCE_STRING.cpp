
// TLE 
/*class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int m = s.length();
        int n = t.length();
        
        return calcD(s,t,m,n);
    }
    
    int mina(int x , int y , int z)
    {
        return min(min(x,y),z);
    }
    
    int calcD(string s , string t , int m , int n)
    {
         if(m==0)
            return n;
        
        if(n==0)
            return m;
        
        if(s[m-1] == t[n-1])
            return calcD(s,t,m-1,n-1);
        
        return 1 + mina(calcD(s,t,m,n-1) , calcD(s,t,m-1,n) , calcD(s,t,m-1,n-1));
    }
};
*/

// USING DP

class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int m = s.length();
        int n = t.length();
        
        return calcD(s,t,m,n);
    }
    
    int mina(int x , int y , int z)
    {
        return min(min(x,y),z);
    }
    
    int calcD(string str1 , string str2 , int m , int n)
    {
          int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
           
            if (i == 0)
                dp[i][j] = j;

           
            else if (j == 0)
                dp[i][j] = i; 

          
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];

            else
                dp[i][j]
                    = 1
                      + mina(dp[i][j - 1],
                            dp[i - 1][j], 
                            dp[i - 1][j - 1]);
        }
    }

    return dp[m][n];
    }
};