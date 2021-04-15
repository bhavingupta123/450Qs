#include<bits/stdc++.h>
using namespace std;

//    priority_queue<int> pq;   --> max heap
//    priority_queue <int, vector<int>, greater<int> > pq;  --> min heap

void maxheap(int arr[] , int index , int n)
{
    int i,j,largest=index,l,r;
    l = 2*index +1;
    r = 2*index + 2;

    if(l<n && arr[l]>arr[index])
        largest = l;
    if(r<n && arr[r]>arr[largest])
        largest = r;

    if(largest!=index)
    {
        swap(arr[index],arr[largest]);
        maxheap(arr,largest,n);
    }
}

void heapify(int arr[] , int n)
{
    int i,j,k;
    for(i=(n-2)/2 ; i>=0 ; --i)
    {
        maxheap(arr,i,n);
    }
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];

        for(i=0;i<n;++i)
            cin>>arr[i];
        heapify(arr,n);

        for(i=0;i<n;++i)
            cout<<arr[i]<<" ";

        cout<<"\n";
    }


    return 0;
}