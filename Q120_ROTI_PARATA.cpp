#include<bits/stdc++.h>
using namespace std;


int isvalid(int arr[] , int n , int mid , int k)
{
        int st=0,sum=0,i,j;

        for(i=0;i<n;++i)
        {
            sum=arr[i];
            j=2;

            while(sum<=mid)
            {
                st++;
                sum+=arr[i]*j;
                j++;
            }

            if(st>=k)
                return 1;
        }

        return 0;
}

int findPages(int arr[], int n, int m) {

        int i,j,k,l,h=0,mid,ans=INT_MAX;

        l = 0;
        h=1e8;

        while(l<=h)
        {
            mid=(l+h)/2;

            if(isvalid(arr,n,mid,m))
            {
                ans=mid;
                h = mid-1;
            }

            else
            {
                l = mid +1 ;
            }
        }

        return ans;
    }


int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t;

    cin>>t;

    while(t--)
    {
       cin>>k>>n;

        int arr[n];

        for(i=0;i<n;++i)
            cin>>arr[i];

        cout<<findPages(arr,n,k)<<"\n";
    }

    return 0;
}