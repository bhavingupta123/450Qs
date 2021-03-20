class Solution {
  public:
  
    int isvalid(int arr[] , int n , int m , int mid)
    {
        int st=1,sum=0,i,j;
        
        for(i=0;i<n;++i)
        {
            sum+=arr[i];
            
            if(sum>mid)
            {
                st++;
                sum=arr[i];
            }
            
            if(st>m)
            return 0;
        }
        
        return 1;
    }
  
    int findPages(int arr[], int n, int m) {
        
        int i,j,k,l,h=0,mid,ans=-1;
        
        l = *max_element(arr, arr + n);
        
        for(i=0;i<n;++i)
        {
            h+=arr[i];
        }
        
        while(l<=h)
        {
            mid=(l+h)/2;
            
            if(isvalid(arr,n,m,mid))
            {
                ans = mid;
                h = mid-1;
            }
            
            else
            {
                l = mid +1 ;
            }
        }
        
        return ans;
    }
};