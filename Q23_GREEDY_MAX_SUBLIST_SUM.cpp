//https://binarysearch.com/problems/Largest-Sublist-Sum

int solve(vector<int>& nums) {
    
    int i,j,k;

    int maxsofar=nums[0],maxhere=nums[0],maxele=0;

    for(i=1;i<nums.size();++i){

        maxhere = max(nums[i],nums[i]+maxhere);
        maxsofar = max(maxsofar,maxhere);
    }
    return maxsofar;
}