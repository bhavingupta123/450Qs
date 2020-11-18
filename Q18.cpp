/* Q.18 find duplicates*/


/* method 1 USING SET O(N)*/

/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int ele,item,d,n,flag=0,i,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;

    cin>>n;
    ele=0;
    int arr[n];

    set<int> s;
    set<int>::iterator it;

   for(i=0;i<n;++i)
   {
       cin>>arr[i];
       int old = s.size();

       s.insert(arr[i]);

       int news=s .size();

       if(old==news)
        cout<<arr[i];
   }

    return 0;
}
*/




/* method 2 MODIFYING THE ARRAY ITSELF O(N)*/

/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int ele,item,d,n,flag=0,i,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;

    cin>>n;
    ele=0;
    int arr[n];

    set<int> s;
    set<int>::iterator it;

   for(i=0;i<n;++i)
   {
       cin>>arr[i];
   }

   for(i=0;i<n;++i)
   {
       int index = abs(arr[i]);

       if(arr[index]<0)
        {
            cout<<-arr[index];
            break;
        }

        arr[index]=-arr[index];
   }

    return 0;
}*/


/*METHOD 3  -- ACTUAL METHOD*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int ele,item,d,n,flag=0,i,ans1=0,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,temp;

    cin>>n;
    ele=0;
    int arr[n];



   for(i=0;i<n;++i)
   {
       cin>>arr[i];
   }

   int to,hr;

   to = arr[0];
   hr = arr[0];

   do{

    to = arr[to];
    hr = arr[arr[hr]];
   }while(to!=hr);

   to=arr[0];

   while(to!=hr)
    {
        to=arr[to];
        hr=arr[hr];
    }

    cout<<hr;
    return 0;
}

