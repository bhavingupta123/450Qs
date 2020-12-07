/*Q.25 FIND ELE OCCURENCE GREATER THAN N/K TIMES */

/*METHOD 1 STORE LAST ELEMENT , COPY ELEMENTS FROM LAST */

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>k;

    long long int arr[n];

    ele=n/k;

    unordered_map<int,int> cntt;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        cntt[arr[i]]++;
    }

    for(auto i:cntt)
    {
        if(i.second > ele)
            cout<<i.first<<" ";
    }

    return 0;
}

