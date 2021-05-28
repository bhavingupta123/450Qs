//https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1

int searchInSorted(int arr[], int N, int K) 
{ 
    int start=0 , end=N , mid;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(arr[mid]==K)
            return 1;
        else if(arr[mid]>K)
            end = mid-1;
        else
            start = mid+1;
    }
    
    return -1;
       
}