//https://binarysearch.com/problems/Mutual-Followers

vector<int> solve(vector<vector<int>>& relations) {
    
    map<int,int>mp1,mp2;
    vector<int> v;
    int i,j,k;
    set<pair<int, int>> s;

    set<int> ans;

    for (int i = 0; i < relations.size(); i++) {
        s.insert({relations[i][0], relations[i][1]});
    }

    for (auto x : s) {
        if (s.find({x.second, x.first}) != s.end()) {
            ans.insert(x.second);
            ans.insert(x.first);
        }
    }

    return vector<int>(ans.begin(), ans.end());
    

}