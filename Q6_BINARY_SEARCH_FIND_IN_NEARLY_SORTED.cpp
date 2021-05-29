//https://www.geeksforgeeks.org/search-almost-sorted-array/

int binarySearch(int arr[], int low, int high, int x)
{
	if(l>r)
		return -1;
	
	int mid = (low + high)/2;
	
	if(arr[mid] == x)
		return mid;
	
	if(mid>low && arr[mid-1]==x)
		return (mid-1);
	
	if(mid<high && arr[mid+1]==x)
		return (mid+1);
	
	if(arr[mid] < x)
		return binarySearch(arr,mid+2,high,x);
	else
		return binarySearch(arr,low,mid-2,x);
	
}