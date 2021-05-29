//https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find

    long long bs(vector<long long> arr, long long n, long long x,int low,int high )
    {
        if(low>high)
            return -1;
        
        if(x > arr[high])
            return high;
        
        int mid = (low + high)/2;
        
        if(arr[mid] == x)
            return mid;
            
        if(mid > 0 && arr[mid - 1]<=x && x<arr[mid])
            return (mid -1);
        
        if(arr[mid] < x)
            return bs(arr , n ,x ,mid+1,high);
        else
            return bs(arr , n ,x ,low,mid -1);
            
    }
    
    int findFloor(vector<long long> v, long long n, long long x){
        
        return bs(v , n , x , 0 , v.size()-1 );
    }
};