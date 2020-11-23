/*Q.5 MOVE ALL NEGATIVE ELEMENTS TO ONE SIDE OF ARRAY*/


/* TWO POINTER APPROACH*/


#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;
    int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    i=0;
    j=n-1;

    while(i<=j)
    {
        if(arr[i]<0 && arr[j]>0)
        {
            i++;
            j--;
        }

        else if(arr[i]>0 && arr[j]>0)
        {
            j--;
        }

        else if(arr[i]>0 && arr[j]<0)
        {
            swap(arr[i],arr[j]);
            j--;
            i++;
        }

        else if(arr[i]<0 && arr[j]<0)
        {
            i++;
        }
    }

    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
