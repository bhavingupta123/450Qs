class Solution {
	public:
		int LongestRepeatingSubsequence(string str1){
		  int i,k,j,n,m;
            n = str1.length();
        
            int t[n+1][n+1];
        
            for(i=0;i<=n;++i)
            {
                for(j=0;j<=n;++j)
                {
                    if(i==0 || j==0)
                        t[i][j]=0;
                    else if(str1[i-1]==str1[j-1]  && i!=j)
                        t[i][j] = t[i-1][j-1] + 1;
                    else
                        t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }

    return t[n][n];
}