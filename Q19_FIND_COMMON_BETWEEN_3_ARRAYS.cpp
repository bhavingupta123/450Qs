/*Q.19 FIND COMMON ELEMENTS BETWEEN 3 ARRAYS*/

/*METHOD 1 USE INTERSECTION */

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n1>>n2>>n3;
    long long int arr1[n1],arr2[n2],arr3[n3];

    for(i=0;i<n1;++i)
    {
        cin>>arr1[i];
    }

    for(i=0;i<n2;++i)
    {
        cin>>arr2[i];
    }

    for(i=0;i<n3;++i)
    {
        cin>>arr3[i];
    }

    i=j=k=0;

    while(i<n1 && j<n2 && k<n3)
    {
        if(arr1[i]==arr2[j] && arr1[i]==arr3[k])
            cout<<arr1[i]<<" ";

        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr3[k])
            j++;
        else
            k++;
    }

    return 0;
}

