//https://binarysearch.com/problems/Equivalent-Pairs

int solve(vector<int>& nums) {
    
    unordered_map<int,int> mp;
    int i,j,k,ans=0;

    for(i=0;i<nums.size();++i)
    {   
        if(mp.count(nums[i]))
            mp[nums[i]]++;
        else 
            mp[nums[i]]=1;
    }

    unordered_map<int, int>::iterator itr;
   
    for (itr = mp.begin(); itr != mp.end(); ++itr) {
       
       ans+=(itr->second*(itr->second -1)/2);
    }

    return ans;

}

/*OR*/

int solve(vector<int>& tasks, int k) {
    unordered_map<int, int> lastdone;
    int curr = 0;
    k += 1;
    for (int t : tasks) {
        if (lastdone.count(t)) {
            curr = max(curr, lastdone[t] + k);
        }
        lastdone[t] = curr++;
    }
    return curr;
}