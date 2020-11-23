/*Q.7 CYCLICALLY ROTATE ARRAY BY 1*/

/*METHOD 1 STORE LAST ELEMENT , COPY ELEMENTS FROM LAST */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;
    int arr[n];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    ele=arr[n-1];

    for(i=n-1;i>0;--i)
        arr[i]=arr[i-1];

    arr[0]=ele;

    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

