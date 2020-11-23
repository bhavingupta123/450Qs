/*Q.6 UNION AND INTERSECTION OF TWO ARRAY'S*/

/* METHOD 1 --> SORT AND BINARY SEARCH*/

/*
#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>m;
    int arr[n],arr2[m];

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    for(i=0;i<m;++i)
    {
        cin>>arr2[i];
    }

    sort(arr2,arr2+m);

    for(i=0;i<m;++i)
        cout<<arr2[i]<<" ";

    for(i=0;i<n;++i)
    {
        if(!(binary_search(arr2,arr2+m,arr[i])))
            cout<<arr[i]<<" ";
    }

    cout<<"\n\n";

    for(i=0;i<n;++i)
    {
        if((binary_search(arr2,arr2+m,arr[i])))
            cout<<arr[i]<<" ";
    }

    return 0;
}*/


/*METHOD 2   USING HASHING -->SET in C++*/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>m;
    int arr[n],arr2[m];

    set<int> se,si;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        se.insert(arr[i]);
        si.insert(arr[i]);
    }

    for(i=0;i<m;++i)
    {
        cin>>arr2[i];
        se.insert(arr2[i]);
    }

    for (auto it = se.begin(); it != se.end(); it++)
        cout << *it << " ";

    cout<<"\n\n";

    for(i=0;i<m;++i)
    {
        if(si.find(arr2[i])!=si.end())
                cout<<arr2[i]<<" ";
    }

    return 0;
}

