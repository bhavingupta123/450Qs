/*Q.21 FIND SUB ARRAY WITH SUM 0*/

/*METHOD 1 STORE LAST ELEMENT , COPY ELEMENTS FROM LAST */

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n];

    set<long long int> sum1;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        sum+=arr[i];

        if(sum==0 || sum1.find(sum)!=sum1.end())
        {
            cout<<"True";
            return 0;
        }

        sum1.insert(sum);
    }

    cout<<"False";

    return 0;
}

