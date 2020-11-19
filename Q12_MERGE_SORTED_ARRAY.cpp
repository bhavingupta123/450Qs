/*Q.12 MERGE TWO SORTED ARRAYS WITHOUT USING EXTRA SPACE*/

/* METHOD 1 USING INSERTION SORT TECHNIQUE ---> O(N*M)*/

/*
#include<bits/stdc++.h>

using namespace std;

int merge_swap(int arr[],int arr2[],int n,int m)
{
    int i,j,k;

    for(i=0;i<n;++i)
    {
       if(arr[i]>arr2[0])
       {
           swap(arr[i],arr2[0]);
       }

       int ele=arr2[0];

       for(j=1;j<m && arr2[j]<ele;++j)
       {
           arr2[j-1]=arr2[j];
       }

       arr2[j-1]=ele;
    }
}

int main()
{
    long long int ele,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;
    cin>>n>>m;
    int arr[n],arr2[m];

    for(i=0;i<n;++i)
        cin>>arr[i];

    for(i=0;i<m;++i)
        cin>>arr2[i];

    merge_swap(arr,arr2,n,m);

    for(i=0;i<n;++i)
        cout<<arr[i]<<" ";

        cout<<"\n";

    for(i=0;i<m;++i)
        cout<<arr2[i]<<" ";

    return 0;
}
*/

/*METHOD 2 ---> O(NlogN)*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int ele,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;
    cin>>n>>m;

    int arr[n],arr2[m];

    for(i=0;i<n;++i)
        cin>>arr[i];

    for(i=0;i<m;++i)
        cin>>arr2[i];

    i=n-1;
    j=0;

    for(;i>=0,j<m;++j,--i)
    {
        if(arr[i]>arr2[j])
            swap(arr[i],arr2[j]);
        else
            break;
    }

    sort(arr,arr+n);
    sort(arr2,arr2+m);

    for(i=0;i<n;++i)
        cout<<arr[i]<<" ";

    for(i=0;i<m;++i)
        cout<<arr2[i]<<" ";

    return 0;
}

