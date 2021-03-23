//https://practice.geeksforgeeks.org/problems/the-painters-partition-problem/0#

#include <bits/stdc++.h>

using namespace std;

int min_painter(int a[],int m,int n){
    int ans=1;
    int t=0;
    for(int i=1;i<=n;i++){
        if(t+a[i]<=m){
            t+=a[i];
        }
        else{
            ans++;
            t=a[i];
        }
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k,max1=0;
        cin>>k>>n;
        int sum[n+1],a[n+1];
        sum[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            max1=max(max1,a[i]);
            sum[i]=sum[i-1]+a[i];
        }
        int l=max1;
        int r=sum[n];
        int ans=INT_MAX;
        while(l<=r){
            int m=l+(r-l)/2;
            if(min_painter(a,m,n)<=k){
                ans=min(ans,m);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}