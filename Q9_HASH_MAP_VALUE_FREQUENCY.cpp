//https://binarysearch.com/problems/Equivalent-Value-and-Frequency/

bool solve(vector<int>& nums) {
    
    unordered_map<int,int> mp;
    int i,j,k;

    for(i=0;i<nums.size();++i)
    {
        mp[nums[i]]++;
    }

    for(auto m:mp)
    {
        if(m.first==m.second)
            return true;
    }

    return false;
}