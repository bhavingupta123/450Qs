//https://binarysearch.com/problems/Remove-Last-Duplicate-Entries

vector<int> solve(vector<int>& nums) {
    
    int i,j,k;
    map<int,int> mp;
    vector<int> v;

    for(i=0;i<nums.size();++i)
    {
        mp[nums[i]]++;
    }

    for(auto m:mp)
    {
        if(m.second>1)
            mp[m.first]=m.second-1;
    }

    
    for(i=0;i<nums.size();++i)
    {
        if(mp[nums[i]]>=1)
        {
            v.push_back(nums[i]);
            mp[nums[i]]--;
            
        }
         
    }

    return v;

}

/*OR*/
vector<int> solve(vector<int>& nums) {
    map<int, int> hmap;
    for (auto i : nums) hmap[i]++;
    vector<int> res;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (hmap[nums[i]] > 1) {
            hmap[nums[i]] = 1;
        } else {
            res.push_back(nums[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}