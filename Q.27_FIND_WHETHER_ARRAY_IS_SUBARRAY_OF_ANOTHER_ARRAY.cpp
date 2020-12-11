/*Q.27 FIND WHETHER ARRAY IS SUB ARRAY OF ANOTHER ARRAY*/



#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>m;

    long long int arr[n],new_cnt=0,arr2[m];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    for(i=0;i<m;++i)
    {
        cin>>arr2[i];
    }

    i=j=0;
    while(i<n && j<m)
    {
        if(arr[i]<arr2[j])
            ++i;
        else if(arr[i]==arr2[j])
        {
            i++;
            j++;
        }
        else
            j++;
    }

    if(j>=m)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

