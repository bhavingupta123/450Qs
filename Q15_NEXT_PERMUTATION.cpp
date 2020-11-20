/*Q.12 MERGE TWO SORTED ARRAYS WITHOUT USING EXTRA SPACE*/

#include<bits/stdc++.h>

using namespace std;


void reversearray(int arr[],int i,int j)
{
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
}

int main()
{
    long long int index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;

    cin>>n;

    int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    k=n-2;

    while(k>=0 && arr[k]>arr[k+1])k--;

    if(k==-1)
    {
        reversearray(arr,0,n-1);
    }

    else
    {
        for(i=n-1;i>k;--i)
        {
            if(arr[i]>arr[k])
            {
                swap(arr[i],arr[k]);
                break;
            }
        }

        reversearray(arr,k+1,n-1);
    }

    for(i=0;i<n;++i)
        cout<<arr[i]<<" ";

    return 0;
}

