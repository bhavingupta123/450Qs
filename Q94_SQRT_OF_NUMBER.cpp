#include <bits/stdc++.h>
using namespace std;

int bs(int n)
{
    int i,j,k,l=0,h=n,mid,ans;

    if(n==0 || n==1)
        return n;

    while(l<=h)
    {
        mid = (l+h)/2;

        if(mid * mid == n)
            return mid;

        else if((mid * mid) >n)
            h = mid -1;
        else
            {
                ans = mid;
                l=mid+1;
            }
    }

    return ans;
}

int main()
{
   long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

   cin>>n;
   cout<<bs(n);
   return 0;

}