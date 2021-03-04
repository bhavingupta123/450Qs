#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int subs(string input  , string output)
{
    if(input.length()==0)
    {
        cout<<output<<"\n";
        return 0;
    }

    subs(input.substr(1),output);
    subs(input.substr(1), output+input[0]);
}

int main()
{
    long long int flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    string str1,temp;
    cin>>str1;

    subs(str1," ");

return 0;

}

