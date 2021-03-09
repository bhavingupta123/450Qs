#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    string str,ot="";
    cin>>str;

    string arr[] =
    {
        "2","22" , "222",
        "3","33" , "333",
        "4","44" , "444",
        "5","55" , "555",
        "6","66" , "666",
        "7","77" , "777","7777",
        "8","88" , "888",
        "9","99" , "999","9999"
    };

    for(i=0;i<str.length();++i)
    {
        if(str[i]==' ')
            ot+="0";

        else
        {
            int pos = str[i] - 'A';
            ot = ot + arr[pos];
        }
    }

    cout<<ot;

    return 0;
}