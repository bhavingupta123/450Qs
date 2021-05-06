//https://practice.geeksforgeeks.org/problems/array-to-bst4443/1#

class Solution {
public:

    void build(vector<int> &v , vector<int> nums,int start , int end)
    {
        if(start>end)
            return ;
            
        int mid = (start+end)/2;
        
        v.push_back(nums[mid]);
        build(v,nums,start,mid-1);
        build(v,nums,mid+1,end);
        
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        
        vector<int> v;
        build(v,nums,0,nums.size()-1);
        return v;
    }
};