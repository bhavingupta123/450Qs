#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;


int main()
{
    long long int flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    string str1,str2,temp;
    cin>>str1>>str2;

    str1 = str1+ str1;
    for(i=0;i<str1.length();++i)
    {
        for(j=0;j<str2.length();++j)
        {
            if(str1[i+j]!=str2[j])
                break;
        }

        if(j==str2.length())
        {
            cout<<"\nStrings are rotations of each other";
            return 0;
        }
    }

    cout<<"\n Strings are not rotations of each other";

return 0;

}