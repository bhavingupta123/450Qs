/*Q.3 Kth MAX and MIN element --> using max heap */

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>k;

    int arr[n];

    priority_queue<int> maxh;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        maxh.push(arr[i]);

        if(maxh.size()>k)
            maxh.pop();
    }

    cout<<maxh.top();

    return 0;
}

