#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    long long int flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,num;

    string str,temp;
    cin>>str;

    int arr[2]={0};
    cnt=0;
    for(i=0;i<str.length() ;++i)
    {
       num=str[i] - '0';

       if(i==0 || str[i]!=str[i-1])
            arr[num]=0;
       arr[num]++;

       if(arr[num]<=arr[1-num])
        ++cnt;
    }

    cout<<cnt;
    return 0;

}