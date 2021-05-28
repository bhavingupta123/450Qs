//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    
    int bs(vector<int>& arr, int x , int start , int end)
    {
        int mid = (start+end)/2;
        
        if(start>end)
            return -1;
        
        if(arr[mid]==x)
            return mid;
        
        else if(arr[end]>arr[mid])
        {
            if(x>=arr[mid] && x<=arr[end])
                return bs(arr,x,mid+1,end);
            else
                return bs(arr,x,start,mid-1);
        }
            
        else 
        {
            if(x>=arr[start] && x<=arr[mid])
                return bs(arr,x,start,mid);
            else
                return bs(arr,x,mid+1,end);
        }
        
    }
    
    int search(vector<int>& nums, int target) {
        
         return  bs(nums, target , 0 ,nums.size()-1);
    }
};