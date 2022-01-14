//https://binarysearch.com/problems/Maximum-Length-of-Sublist-with-Positive-Product

int solve(vector<int>& nums) {
    int j = 0, ans = 0, n = nums.size();

    while (j < n) {
        int i = j, countNeg = 0, firstNeg = -1, lastNeg = -1;

        while (j < n and nums[j] != 0) {
            
            if (nums[j] < 0) {
                countNeg++;
                if (firstNeg == -1) firstNeg = j;
                lastNeg = j;
            }

            j++;
        }

        if (countNeg & 1)
            ans = max({ans, j - firstNeg - 1, lastNeg - i});
        else
            ans = max(ans, j - i);

        while (j < n and nums[j] == 0) 
            j++;
    }
    
    return ans;
}
