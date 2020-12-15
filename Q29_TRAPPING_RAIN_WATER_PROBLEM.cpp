/*Q.29 TRAPPING RAIN WATER PROBLEM*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n],mxl[n],mxr[n],water[n]={0};

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    mxl[0]=arr[0];
    mxr[n-1]=arr[n-1];

    for(i=1;i<n;++i)
    {
        mxl[i]=max(mxl[i-1],arr[i]);
    }

    for(i=n-2;i>=0;--i)
    {
        mxr[i]=max(mxr[i+1],arr[i]);
    }

    sum=0;

    for(i=0;i<n;++i)
    {
        water[i]=min(mxl[i],mxr[i])-arr[i];
        sum+=water[i];
    }

    cout<<sum;

    return 0;
}

