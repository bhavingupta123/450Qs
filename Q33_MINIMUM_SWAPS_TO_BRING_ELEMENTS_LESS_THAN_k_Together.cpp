/*Q.33 MINIMUM SWAPS TO BRING ELEMENTS LESS THAN k together*/


#include<bits/stdc++.h>

/*METHOD 1 USE O(N) SPACE*/


using namespace std;

int main()
{
    long long t,start,end1,mid,sum,index,ele,rem,item,d,n,n1,n2,n3,flag=0,i,s=-1,ans1=0,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;

        long long int arr[n];
    
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
        }
    
        cin>>k;
    
        cnt=0;
        ans=0;
        long long int ext=0;
    
        for(i=0;i<n;++i)
            if(arr[i]<=k)
                cnt++;
    
        for(i=0;i<cnt;++i)
            if(arr[i]>k)
                ext++;
    
        ans=ext;
    
        for(i=0,j=cnt;j<n;++i,++j)
        {
            if(arr[i]>k)
                ext--;
    
            if(arr[j]>k)
                ext++;
    
            ans=min(ans,ext);
        }
    
        cout<<ans<<"\n";

    }
    


    return 0;
}


