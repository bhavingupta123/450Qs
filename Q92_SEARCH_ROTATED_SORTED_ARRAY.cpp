class Solution {
public:
    
    int bs(vector<int>& nums , int target , int l,int h)
    {
        if(l>h)
            return -1;
        
        int mid=(l+h)/2;
        
        if(nums[mid]==target)
            return mid;
        
        if(nums[l]<=nums[mid])
        {
            if(target >= nums[l] && target <=nums[mid])
                return bs(nums,target,l,mid-1);
            
            return bs(nums,target,mid+1,h);
        }
        
        if(target >= nums[mid] && target <=nums[h])
        {
           return  bs(nums,target,mid+1,h);
        }
        
        return bs(nums,target,l,mid-1);
    }
    
    int search(vector<int>& nums, int target) {
        
        int i = bs(nums,target, 0, nums.size()-1); 
        return i;
    }
};