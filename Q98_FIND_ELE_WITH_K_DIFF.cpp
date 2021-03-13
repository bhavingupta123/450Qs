#include <bits/stdc++.h>
using namespace std;


int main()
{
    int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;
   cin>>n;

   int arr[n];

   for(i=0;i<n;++i)
    cin>>arr[i];

   cin>>k>>x;

   for(i=0;i<n;)
   {
       if(arr[i] == x)
       {
           cout<<i;
           return 0;
       }

       i+= max(1,(abs(arr[i]-x)/k));
   }

  cout<<-1;

   return 0;

}
