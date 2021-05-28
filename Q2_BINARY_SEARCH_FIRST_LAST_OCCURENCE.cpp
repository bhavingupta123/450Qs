//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1


int findfirst(int arr[], int n , int x)
{
     int start=0 , end = n-1 ,mid,ans=-1;
     
     while(start<=end)
     {
         mid = (start+end)/2;
         if(arr[mid]==x)
         {
             end = mid-1;
             ans = mid;
         }
         else if(arr[mid]>x)
         {
             end = mid-1;
         }
         else
            start = mid+1;
     }
     
     return ans;
}

int findsecond(int arr[], int n , int x)
{
     int start=0 , end = n-1 ,mid,ans=-1;
     
     while(start<=end)
     {
         mid = (start+end)/2;
         if(arr[mid]==x)
         {
             start = mid+1;
             ans = mid;
         }
         else if(arr[mid]>x)
         {
             end = mid-1;
         }
         else
            start = mid+1;
     }
     
     return ans;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    
    ans.push_back(findfirst(arr,n,x));
    ans.push_back(findsecond(arr,n,x));
    
    return ans;
}