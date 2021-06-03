//https://binarysearch.com/problems/Sort-by-Frequency-and-Value

//MEDIUM

bool sort_func(const pair<int,int>&v1,const pair<int,int>&v2)
{
    if(v1.second==v2.second)
        return v1.first>v2.first;
    return v1.second>v2.second;
}

vector<int> solve(vector<int>& nums) {
    unordered_map<int, int> mp;
    int i,j,k;

    for(i=0;i<nums.size();++i)
        mp[nums[i]]++;
    
    vector<pair<int,int>>v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),sort_func);

    vector<int> ans;

    for(i=0;i<v.size();++i)
        ans.insert(ans.end(),v[i].second,v[i].first);
    
    return ans;
}