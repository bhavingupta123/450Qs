//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1#https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1#

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	
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
	
	int count(int arr[], int n, int x) {
	    vector<int> ans;
        int ans1 , ans2;
        
        ans1=findfirst(arr,n,x);
        ans2=findsecond(arr,n,x);
        
        if(ans1==-1)
            return 0;
        
        return ans2-ans1 +1 ;
	}
};