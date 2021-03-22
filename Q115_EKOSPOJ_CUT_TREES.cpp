#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n , int m)
{
    int i,j,k,l,h,mid,sum=0,flag=0,ans=-1;

    l=arr[0];
    h=arr[n-1];

    while(l<=h)
    {
        mid = (l+h)/2;
        flag=0;
        sum=0;
        for(i=0;i<n;++i)
        {
            if(mid < arr[i])
                sum+= arr[i]-mid;

            if(sum >= m)
                {
                    flag=1;
                    ans=max(ans,mid);
                    l = mid+1;
                    break;
                }
        }

        if(!flag)
            h = mid -1 ;
    }

    return ans;
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>m;

    int arr[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    sort(arr , arr+n);
    cout<<bs(arr,n,m);

    return 0;
}