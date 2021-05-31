//https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   
	   if(n==1 || arr[0]>arr[1])
	    return arr[0];
	    
	   if(arr[n-1]>arr[n-2])
	    return arr[n-1];
	    
	    int low=0,mid,high=n;
	    
	    while(low<high)
	    {
	        mid = (low+high)/2;
	        
	        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
	            return arr[mid];
	       else if(arr[mid-1]>arr[mid])
	            high = mid;
	       else
	            low = mid;
	    }
	    
	    return arr[mid];
	}
};