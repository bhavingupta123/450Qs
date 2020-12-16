/*Q.32 THREE WAY PARTITION OF ARRAY*/



/*METHOD 1 USE O(N) SPACE*/


/*using namespace std;

int main()
{
    long long t,start,end1,mid,sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n],f[n],en[n],mi[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    cin>>a>>b;
    start=end1=mid=0;

    for(i=0;i<n;++i)
    {
        if(arr[i]<a)
            f[start++]=arr[i];

        else if(arr[i]>b)
            en[end1++]=arr[i];

       else
            mi[mid++]=arr[i];
    }

    for(i=0;i<start;++i)
    {
        cout<<f[i]<<" ";
    }

    for(i=0;i<mid;++i)
    {
        cout<<mi[i]<<" ";
    }

    for(i=0;i<end1;++i)
    {
        cout<<en[i]<<" ";
    }

    return 0;
}*/

/*METHOD 2 IS USE SORT --> O(NLOGN)*/


/*METHOD 3 --> USE DUTCH NATIONAL FLAG CONCEPT*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,start,end1,mid,sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n],f[n],en[n],mi[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    cin>>a>>b;
    start=0;
    end1=n-1;

    for(i=0;i<=end1;)
    {
        if(arr[i]<a)
            swap(arr[i++],arr[start++]);

        else if(arr[i]>b)
            swap(arr[i],arr[end1--]);

        else
            i++;
    }

    for(i=0;i<n;++i)
        cout<<arr[i]<<" ";

    return 0;
}
