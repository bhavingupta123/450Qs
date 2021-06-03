//https://binarysearch.com/problems/Remove-Duplicate-Numbers

//EASY (given in medium section)

vector<int> solve(vector<int>& nums) {
    
    unordered_map<int,int> mp;
    int i,j,k;
    vector<int> v;

    for(i=0;i<nums.size();++i)
    {
        mp[nums[i]]++;
    }

    for(i=0;i<nums.size();++i)
    {
        if(mp[nums[i]]==1)
        {
            v.push_back(nums[i]);
            mp[nums[i]]=-1;
        }
    }

    return v;
}