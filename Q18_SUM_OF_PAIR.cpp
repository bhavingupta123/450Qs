/*Q.18 SUM OF PAIR EQUAL TO GIVEN SUM*/

/*LEETCODE SOLUTION*/

class Solution{   
public:
    int getPairsCount(int arr[], int n, int sum) {
    
    long long i,cnt=0;
    unordered_map<int,int> map_data;

    for(i=0;i<n;++i)
    {
        map_data[arr[i]]++;
    }

    for(i=0;i<n;++i)
    {
        cnt+=map_data[sum-arr[i]];

        if(arr[i]==sum-arr[i])
            cnt--;

    }

   return cnt/2;
  }
 }

/*FULL ALGORITHM*/


/*
#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n>>sum;

    int arr[n];
    cnt=0;
    unordered_map<int,int> map_data;

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
        map_data[arr[i]]++;
    }

    for(i=0;i<n;++i)
    {
        cnt+=map_data[sum-arr[i]];

        if(arr[i]==sum-arr[i])
            cnt--;

    }

    cout<<cnt/2;

    return 0;
}
*/
 