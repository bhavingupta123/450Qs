#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;
   cin>>t;

   while(t--)
   {
       cin>>n>>ans;
       int arr[n];

       for(i=0;i<n;++i)
        cin>>arr[i];

       sort(arr,arr+n);

       i=0;
       j=1;
       flag=0;

       while(i<n && j<n)
       {
           if(i!=j && (arr[j]-arr[i])==ans)
           {
               cout<<1<<"\n";
               flag=1;
               break;
           }

           else if(arr[j] - arr[i] < ans )
            j++;

          else
            i++;
       }

    if(!flag)
        cout<<-1<<"\n";
   }


   return 0;

}