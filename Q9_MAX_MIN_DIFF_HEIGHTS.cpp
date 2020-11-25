/*Q.9 MINIMIZE MAXIMUM DIFF BETWEEN HEIGHTS*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>k;
    long long int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);


    long long big = arr[n-1]-k;
    long long small = arr[0]+k;

    if(big<small)
        swap(arr[0],arr[n-1]);

    for(i=1;i<n-1;++i)
    {
        long long sub = arr[i]-k;
        long long add = arr[i]+k;

        if(sub>= small || add<=big)
            continue;

        if(add-small<=big-sub)
            small=sub;
        else
            big=add;
    }

    cout<<min(big-small,arr[n-1]-arr[0]);

    return 0;
}

