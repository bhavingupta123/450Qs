/*Q.24 FIND LONGEST CONSECUTIVE SUB-SEQUENCE*/

/*METHOD 1 SORT AND STORE WITHOUT DUPLICATES*/

/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n],new_cnt=0;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cnt=0;
    ans=0;
    vector<long long int> v;

    v.push_back(arr[0]);

    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }

    for(i=1;i<n;++i)
    {
        if(v[i]==v[i-1]+1)
            cnt++;
        else
            cnt=1;

        ans = max(ans, cnt);
    }

    cout<<ans;
    return 0;
}
*/

/*METHOD 2 SORT AND STORE WITHOUT DUPLICATES*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    long long int arr[n],new_cnt=0;

    set<long long int> se;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        se.insert(arr[i]);
    }

    for(i=0;i<n;++i)
    {
        if(se.find(arr[i]-1)==se.end())
        {
            j=arr[i];

            while(se.find(j)!=se.end())
                j++;

            ans=max(ans,j-arr[i]);
        }
    }

    cout<<ans;

    return 0;
}
