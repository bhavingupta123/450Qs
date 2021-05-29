int bs(int arr[],int n,int low,int high)
{
	int mid = (low+high)/2;
	
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(arr[mid]==1 && mid==0 || arr[mid-1]==0)
			return mid;
		
		if(arr[mid]==1)
			high = mid-1;
		else
			low = mid +1;
	}
}

int findpos(int arr[],int n)
{
	int low=0,high=1;
	
	while(arr[high]==0)
	{
		low=high;
		high=high*2;
	}
	
	return bs(arr,n,low,high);
}