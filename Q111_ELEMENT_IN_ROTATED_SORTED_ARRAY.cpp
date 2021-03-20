#include <bits/stdc++.h>
using namespace std;

int bs(int arr[] , int l , int h , int key)
{

    if(l>h)
        return -1;

    int mid =(h+l)/2;

    if(arr[mid] == key)
        return mid;

    if(arr[l] <= arr[mid])
    {
        if(key <= arr[mid] && key >= arr[l])
            return bs(arr,l,mid-1,key);

        else
            return bs(arr,mid+1,h,key);

    }

    if(key >= arr[mid] && key <= arr[h])
        return bs(arr,mid+1,h,key);
    else
        return bs(arr,l,mid-1,key);
}

int main()
{
    int t,key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n1,n,n2,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,sum=0,l,r;

    cin>>n1>>key;

    int arr1[n1],arr2[n2],arr[n1];

    for(i=0;i<n1;++i)
        {
            cin>>arr1[i];
        }

    i=0;j=0,k=-1;

    ans = bs(arr1,0,n1-1,key);

    if(ans == -1)
        cout<<"not found";
    else
        cout<<"index:"<<ans;

    return 0;
}