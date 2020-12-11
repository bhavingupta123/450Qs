/*Q.28 FIND TRIPLET WITH GIVEN SUM*/



#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>sum;

    long long int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(i=0;i<n-2;++i)
    {
        int l=i+1;
        int r=n-1;

        while(l<r)
        {
            if((arr[i]+arr[l]+arr[r])==sum)
            {
                cout<<"FOUND\n";
                return true;
            }

            else if((arr[i]+arr[l]+arr[r])<sum)
                l++;
            else
                r--;
        }
    }

    return 0;
}

