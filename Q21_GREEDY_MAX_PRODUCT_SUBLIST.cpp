//https://binarysearch.com/problems/Maximal-Sublist-Product

int solve(vector<int>& nums) {

    if(nums.size()==0)
        return 0;
    
    if(nums.size()==1)
        return nums[0];


    int i,j,k,maxend=nums[0],minend=nums[0],maxp=nums[0],temp;

    for(i=1;i<nums.size();++i){

        temp = max({nums[i],nums[i]*maxend,nums[i]*minend});
        minend = min({nums[i],nums[i]*maxend,nums[i]*minend});
        
        maxend=temp;
        maxp = max(maxp,maxend);

    }
    
    return maxp;
}

/*OR*/

int solve(vector<int>& nums) {
    int product = 1, neg = 0, cur = 0, maxp = INT_MIN;
    for (int i : nums) {
        product *= i;
        cur = product;
        if (product < 0) {
            if (neg)
                cur /= neg;
            else
                neg = cur;
        } else if (product == 0) {
            product = 1;
            neg = 0;
        }
        maxp = max(maxp, cur);
    }
    return maxp;
}