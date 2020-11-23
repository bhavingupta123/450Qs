/*Q.4 SORT ARRAY OF 0's  1's  2's*/


/* USE VARIABLE TO COUNT 1 ,2 ,3 */

/*
#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long zeroes=0,ones=0,twos=0;

    int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];

        if(arr[i]==0)
            zeroes++;
        else if(arr[i]==1)
            ones++;
        else
            twos++;
    }

    for(i=0;i<zeroes;++i)
    {
        cout<<0<<" ";
    }

    for(i=0;i<ones;++i)
    {
        cout<<1<<" ";
    }

    for(i=0;i<twos;++i)
    {
        cout<<2<<" ";
    }

    return 0;
}*/




/*DUTCH NATIONAL FLAG ALGORITHM*/



#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long low=0,mid=0,high=n-1;

    int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0: swap(arr[mid],arr[low]);
                    mid++;low++;
                    break;

            case 1: mid++;
                    break;

            case 2: swap(arr[high],arr[mid]);
                    high--;
        }
    }

    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

