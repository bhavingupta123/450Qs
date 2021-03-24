//https://www.spoj.com/problems/ANARC05B/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    while(true)
    {
        cin>>n;

        max_sum=0;
        sum1=0;
        sum2=0;

        if(n==0)
            break;

        int arr1[n];

        for(i=0;i<n;++i)
            cin>>arr1[i];

        cin>>m;

        int arr2[m];

        for(i=0;i<m;++i)
            cin>>arr2[i];

        i=0;
        j=0;

        while(i<n && j<m)
        {
            if(arr1[i]>arr2[j])
                sum2+=arr2[j++];

            else if(arr1[i]<arr2[j])
                sum1+=arr1[i++];

            else
            {
                max_sum += max(sum1,sum2) + arr1[i];
                i++;
                j++;
                sum1=0;
                sum2=0;
            }
        }

        while(i<n)
            sum1+=arr1[i++];

        while(j<m)
            sum2+=arr2[j++];

        max_sum+= max(sum1,sum2);

        cout<<max_sum<<"\n";
    }

    return 0;
}