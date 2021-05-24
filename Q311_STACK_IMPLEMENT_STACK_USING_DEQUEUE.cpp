#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int insert(int ele)
{
    dq.push_front(ele);
}

int dele()
{
    if(dq.size())
    {
        int top = dq.front();
        dq.pop_front();
        return top;
    }
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    insert(5);
    insert(10);
    cout<<dele()<<"\n";
    insert(15);
    cout<<dele()<<"\n";
    return 0;
}