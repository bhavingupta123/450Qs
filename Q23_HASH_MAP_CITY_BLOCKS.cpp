//https://binarysearch.com/problems/City-Blocks
//EASY

int solve(vector<vector<string>>& matrix, vector<string>& blocks) {
    
    unordered_map<string, pair<int, int>> mp;
    int i,j;

    for (i=0; i<matrix.size(); i++) {
        for (j=0; j<matrix[0].size(); j++) {
            mp[matrix[i][j]] = {i, j};
        }
    }

    int ans = 0;
    pair<int, int> prev = {0, 0};

    for (auto m : blocks) {
        pair<int, int> curr = mp[m];
        ans += (abs(curr.first - prev.first) + abs(curr.second - prev.second));
        prev = curr;
    }
    return ans;
}