int ceilSearch(int arr[], int low, int high, int x)
{
	if(low>high)
		return -1;
	
	if(x <= arr[low])
		return low;
	
	if(x>arr[high])
		return -1;
	
	if(arr[mid] == x)
		return mid;
	
	if(mid<high && x>ar[mid] && x<=arr[mid+1])
			return (mid+1);
	
	if(arr[mid]>x)
		ceilSearch(arr,mid-1,high,x);
	else
		ceilSearch(arr,low,mid+1,x);
}