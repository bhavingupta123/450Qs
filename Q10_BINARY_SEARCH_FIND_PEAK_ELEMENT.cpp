//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1 || nums[0] > nums[1]) 
            return 0;
        int high = nums.size();
        
        if(nums[high-1] > nums[high-2]) 
            return nums.size()-1;
        
        int low = 0;
        int mid;
        
        while(low < high)
        {
            mid = (low + high) / 2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) 
                return mid;
            else if(nums[mid] > nums[mid-1]) 
                low = mid;
            else 
				high = mid;
        }
        
        return mid;
    }
};