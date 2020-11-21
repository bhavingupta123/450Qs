/*Q.16 COUNT INVERSION using merge sort technique*/

#include<bits/stdc++.h>

using namespace std;

long long _merge(int arr[],int temp[],long long left,long long mid,long long right)
{
    long long i,j,k,cnt=0;

    i=left;
    j=mid;
    k=left;

    while((i<=mid-1)&& (j<=right)){

        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }

        else{
            temp[k++]=arr[j++];

            cnt+=(mid-i);
        }
    }

    while(i<=mid-1)
        temp[k++]=arr[i++];

    while(j<=right)
        temp[k++]=arr[j++];

    for(i=left;i<=right;++i)
        arr[i]=temp[i];

    return cnt;

}


long long merge_sort(int arr[],int temp[],long long left,long long right)
{
    long long cnt=0;
    long long mid;

    if(left<right)
    {
         mid= (left+right)/2;

         cnt+=merge_sort(arr,temp,left,mid);
         cnt+=merge_sort(arr,temp,mid+1,right);

         cnt+=_merge(arr,temp,left,mid+1,right);
    }

    return cnt;
}

int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    int arr[n],temp[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    ans=merge_sort(arr,temp,0,n-1);

    cout<<ans;

    return 0;
}

