//https://binarysearch.com/problems/K-and-K/editorials

int solve(vector<int>& nums) {
    
    unordered_set<int> set;
	
    for (auto& it:nums) 
        set.insert(it);
	int max = -1;

	for (auto& it:nums) 
        if (set.find(-it) != set.end() && it > max) 
            max = it;
            
	return max;
}

/*OR*/

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i : nums) {
        if (i <= 0 && binary_search(nums.begin(), nums.end(), -i)) {
            return -i;
        }
    }

    return -1;
}