/*METHOD 1 */

/*int FindMaxSum(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;

  for (i = 1; i < n; i++)
  {
     excl_new = (incl > excl)? incl: excl;

     incl = excl + arr[i];
     excl = excl_new;
  }

   return ((incl > excl)? incl : excl);
}

*/

// USING DP

ll dp[100001];

ll solve(ll arr[] ,ll i)
{
    ll sum1,sum2;
    
    if(i<=-1)
        return 0;
    
    if(dp[i]!=-1)
        return dp[i];
    
    sum1 = arr[i] + solve(arr,i-2);
    sum2 = solve(arr,i-1);
    
    return dp[i] =  max(sum1,sum2);
}

ll FindMaxSum(ll arr[], ll n)
{
    long long int i,j,k,sum1=0,sum2=0;
    
    memset(dp,-1,sizeof(dp));
    
    return solve(arr,n-1);

}