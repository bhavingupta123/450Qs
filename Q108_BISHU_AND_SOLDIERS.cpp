#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,sum=0,l,r;

    cin>>n;

    int arr[n],arr2[n];

    for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }

   cin>>t;

   sort(arr,arr+n);

   while(t--)
   {
       cin>>ans;
        sum=0;cnt=0;
       for(i=0;i<n;++i)
       {
           if(arr[i]<=ans)
           {
               sum+=arr[i];
               cnt++;
           }
       }

       cout<<cnt<<" "<<sum<<"\n";
   }


    return 0;
}