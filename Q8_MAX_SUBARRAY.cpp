/*Q.8 find max sub array sum --- KADANE'S ALGORITHM*/
#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int ele,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;
    cin>>n;
    int arr[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    long long int end_sum=0,max_sum=INT_MIN;

    for(i=0;i<n;++i)
    {
        end_sum+=arr[i];

        if(max_sum<end_sum)
            max_sum=end_sum;

        if(end_sum<0)
            end_sum=0;
    }

    cout<<max_sum;

    return 0;
}
