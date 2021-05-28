//https://practice.geeksforgeeks.org/problems/rotation4723/1#

class Solution{
public:	

    int find(int arr[] , int n , int low , int high)
    {
        if(low>high)
            return 0;
        if(low==high)
            return low;
        
        int mid  = (low + high)/2;
        
        if(mid < high && arr[mid + 1]< arr[mid])
            return (mid + 1);
        
        if(mid> low && arr[mid]<arr[mid-1])
            return mid;
        
        if(arr[high]>arr[mid])
            return find(arr,n,low,mid-1);
        else
            return find(arr,n,mid+1,high);
    }
    
	int findKRotation(int arr[], int n) {
	    
	    return find(arr,n,0,n-1);
	    
	    
	}

};