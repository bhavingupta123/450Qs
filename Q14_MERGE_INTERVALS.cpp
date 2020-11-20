/*Q.14 MERGE INTERVALS WITHOUT USING EXTRA SPACE*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int index,ele,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;

    cin>>n;

    int arr[n],arr1[n],actual[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i]>>arr1[i];
    }

    index=0;

    for(i=1;i<n;++i)
    {
        if(arr1[index]>=arr[i])
        {
            arr[index]=min(arr[i],arr[index]);
            arr1[index]=max(arr1[i],arr1[index]);
        }
        else
        {
            index++;
            arr[index]=arr[i];
            arr1[index]=arr1[i];
        }
    }

    for(i=0;i<=index;++i)
    {
        cout<<arr[i]<<" "<<arr1[i]<<"\n";
    }

    return 0;
}

