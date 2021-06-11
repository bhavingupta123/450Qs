//https://binarysearch.com/problems/Equivalent-Product-Pairs

int solve(vector<int>& nums) {
    
    map<int,int> mp;
    int i,j,k,n = nums.size(),cnt=0;

    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            cnt+=8*mp[nums[i]*nums[j]]++;
        }
    }

    return cnt;
}