int bs(int arr[], int x, int l, int r)
{
    if (r>=l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return bs(arr, x,l, mid-1);
        return bs(arr,x, mid+1, r);
    }
    return -1;
}

int find(int arr[] , int key)
{
	int low=0,high=1;
	int val = arr[0];
	
	while(val<key)
	{
		low = high;
		high = high*2;
		val = arr[low];
	}
	
	return bs(arr,key,low,high);
}