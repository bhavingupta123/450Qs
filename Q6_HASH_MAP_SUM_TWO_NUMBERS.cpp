//https://binarysearch.com/problems/Sum-of-Two-Numbers

bool solve(vector<int>& nums, int sum) {
    
    unordered_set<int> s;

   for (int i = 0; i < nums.size(); i++)
	{
		int temp = sum - nums[i];

		if (s.find(temp) != s.end())
			return true;

		s.insert(nums[i]);
	}

    return false;
}


/*GFG*/
//https://practice.geeksforgeeks.org/problems/key-pair5616/1

class Solution{
public:	
	bool hasArrayTwoCandidates(int nums[], int n, int sum) {
	   unordered_set<int> s;
    
       for (int i = 0; i < n; i++)
    	{
    		int temp = sum - nums[i];
    
    		if (s.find(temp) != s.end())
    			return true;
    
    		s.insert(nums[i]);
    	}
    
        return false;
	}
};