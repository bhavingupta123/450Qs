class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    
    int check(int arr[] , int n)
    {
        int i,j,k,index=0,cnt=1;
        
        for(i=1;i<n;++i)
        {
            if(arr[index] == arr[i])
                cnt++;
            else
                cnt--;
            
            if(cnt==0)
            {
                index=i;
                cnt=1;
            }
        }
        
        return arr[index];
    }
    
    int confirm(int arr[]  , int n , int ele)
    {
        int i,j,k,cnt=0;
        
        for(i=0;i<n;++i)
            if(ele == arr[i])
                cnt++;
        
        if(cnt > n/2)
            return ele;
        else 
            return -1;
    }
    
    int majorityElement(int arr[], int size)
    {
        int i,j,k,maj_ele,ans;
        
        maj_ele = check(arr,size);
        ans = confirm(arr, size ,maj_ele);
        
        return ans;
    }
};