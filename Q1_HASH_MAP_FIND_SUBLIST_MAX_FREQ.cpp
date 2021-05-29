//https://binarysearch.com/problems/Shortest-Sublist-With-Max-Frequency/

int solve(vector<int>& nums) {

    unordered_map<int,int> mp;
    unordered_map<int,int> freq;

    int i,j,k;
    int mx=0,mn,len;

    for(i=0;i<nums.size();++i)
    {
        int ele = nums[i];

        if(freq[ele]==0)
        {
            mp[ele]=i;
            freq[ele]=1;
        }
        else
            freq[ele]++;

        if(freq[ele]>mx)
        {
            mx = freq[ele];
            mn = i- mp[ele]+1;
        }

        else if(freq[ele]==mx && (i - mp[ele] +1) < mn )
        {
            mn = (i - mp[ele] +1);
        }
    }

    return mn;
     
}