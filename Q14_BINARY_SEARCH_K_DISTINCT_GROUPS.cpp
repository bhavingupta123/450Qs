//https://binarysearch.com/problems/K-Distinct-Groups
//MEDIUM

bool can(vector<int>& v, int take, int k) {
    long long total = 0;
    for (int val : v) {
        total += min(val, take);
    }
    return total / k >= take;
}

int solve(vector<int>& counts, int k) {
    int lhs = 0;
    int rhs = 2e9;
    while (lhs < rhs) {
        int mid = (lhs + rhs + 1) / 2;
        if (can(counts, mid, k)) {
            lhs = mid;
        } else {
            rhs = mid - 1;
        }
    }
    return lhs;
}