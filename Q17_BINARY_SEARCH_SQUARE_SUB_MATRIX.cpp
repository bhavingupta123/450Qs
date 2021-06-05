//https://binarysearch.com/problems/Square-Submatrix-Sum-Below-Target

//MEDIUM

int solve(vector<vector<int>>& nums, int target) {
    int n = nums.size(), m = nums[0].size(), s = 0, e = min(n, m);
    vector<vector<int>> pre(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + nums[i - 1][j - 1];
        }
    }
    auto is_valid = [&](int x) -> bool {
        for (int i = x; i <= n; i++) {
            for (int j = x; j <= m; j++) {
                int cs = pre[i][j] - pre[i][j - x] - pre[i - x][j] + pre[i - x][j - x];
                if (cs <= target) return true;
            }
        }
        return false;
    };
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (is_valid(m)) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return e * e;
}