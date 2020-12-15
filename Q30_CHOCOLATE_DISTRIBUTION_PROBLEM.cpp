/*Q.30 CHOCOLATE DISTRIBUTION PROBLEM*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
    
        long long int arr[n];
    
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        cin>>m;
        ans=INT_MAX;
        sort(arr,arr+n);
    
        for(i=0;i<=n-m;++i)
        {
            ans=min(ans,arr[i+m-1]-arr[i]);
        }
    
        cout<<ans<<"\n";
    }
    return 0;
}


