/*Q17 BEST TIME TO BUY AND SELL STOCK*/


/*LEETCODE C LANG APPROACH*/
int maxProfit(int* prices, int pricesSize){

    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;
        
    
    long long min_elem,max_diff;
    
    if(pricesSize==1 || pricesSize==0)
        return 0;
    
    min_elem=prices[0];
    max_diff=prices[1]-prices[0];

    for(i=1;i<pricesSize;++i)
    {
        if(prices[i]-min_elem > max_diff)
            max_diff=prices[i]-min_elem;

        if(prices[i]<min_elem)
            min_elem=prices[i];
    }

    if(max_diff>=0)
        return max_diff;
    else
        return 0;

}


/*WHOLE CODE*/

/*
#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int sum,index,ele,rem,item,d,n,flag=0,i,s=-1,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;

    cin>>n;

    int arr[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    long long min_elem,max_diff;

    min_elem=arr[0];
    max_diff=arr[1]-arr[0];

    for(i=1;i<n;++i)
    {
        if(arr[i]-min_elem > max_diff)
            max_diff=arr[i]-min_elem;

        if(arr[i]<min_elem)
            min_elem=arr[i];
    }

    if(max_diff>=0)
        cout<<max_diff;
    else
        cout<<0;

    return 0;
}


*/