/*Q.31 SMALLEST SUBARRAY WITH SUM GREATER THAN x*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,start,end1,sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>t;
    while(t--)
    {
       cin>>n>>m;

        long long int arr[n];

        for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        start=end1=0;

        long long int curr_sum=0,min_len=n+1;

        while(end1<n)
        {
            while(curr_sum<=m && end1<n)
                curr_sum+=arr[end1++];

            while(curr_sum>m && start<n)
            {
                if(end1-start<=min_len)
                    min_len=end1-start;

                curr_sum-=arr[start++];
            }
        }

        cout<<min_len<<"\n";

    }

    return 0;
}

