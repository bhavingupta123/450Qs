#include<bits/stdc++.h>
using namespace std;

//    priority_queue<int> pq;   --> max heap
//    priority_queue <int, vector<int>, greater<int> > pq;  --> min heap

int kLargestSum(int arr[] , int k , int n)
{
    int sum[n+1],i,j;

    sum[0] = 0;
    sum[1] = arr[0];

    for(i=2;i<=n;++i)
        sum[i] = arr[i-1] + sum[i-1];

    priority_queue <int, vector<int>, greater<int> > pq;

    for(i=1;i<=n;++i)
    {
        for(j=i;j<=n;++j)
        {
            int diff = sum[j] - sum[i-1];

            if(pq.size()<k)
                pq.push(diff);

            else
            {
                if(diff > pq.top())
                {
                    pq.pop();
                    pq.push(diff);
                }
            }
        }
    }

    return pq.top();
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    cin>>n>>k;
    int arr[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    cout<<kLargestSum(arr,k,n);

    return 0;
}