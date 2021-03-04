#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    long long int flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    string str,temp;
    cin>>str;

    int arr[2];

    int count0=0 , count1=0;

    for(i=0;i<str.length() ;++i)
    {
        if(str[i]=='0')
            ++count0;
        else
            ++count1;

        if(count0==count1)
            ++cnt;
    }

    if(count0!=count1 && cnt==0)
        cnt=-1;

    cout<<cnt;

return 0;

}
