#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;


int main()
{
    long long int flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    map<char,int> ma;

    string str;
    cin>>str;

    for(i=0;i<str.length();++i)
        ma[str[i]]++;

    for(auto it : ma){
        if(it.second > 1)
            cout<<it.first<<":"<<it.second<<"\n";
    }

return 0;
