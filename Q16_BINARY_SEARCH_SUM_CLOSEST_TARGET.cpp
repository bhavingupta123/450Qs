//https://binarysearch.com/problems/Update-List-Sum-Closest-to-Target
//MEDIUM

int solve(vector<int>& nums, int target) {
    
    int low = 0,high = *max_element(nums.begin(),nums.end());
    int mid,ans=INT_MIN,diff=INT_MAX;
    int i,j,k,sum=0;

    while(low<=high)
    {
        int mid  = (low + high)/2;
        sum=0;
        for(i=0;i<nums.size();++i)
        {
            if(nums[i]>mid)
            {
                sum+=mid;
            }
            else
            {
                sum+=nums[i];
            }
        }

        if(sum==target)
            return mid;

        else if(sum>target)
            {
                high = mid -1;
            }
        else
            {
               low = mid + 1;
            }

        if(diff>abs(sum-target) || (diff == abs(sum - target) && target >= sum))
        {
            ans = mid;
            diff = (abs(sum-target));
        }    
    }

    return ans;
}