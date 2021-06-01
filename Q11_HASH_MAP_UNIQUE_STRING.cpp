//https://binarysearch.com/problems/A-Unique-String

bool solve(string s) {
    
    int i,j,k;
    unordered_map<char,int> mp;

    for(i=0;i<s.length();++i)
        mp[s[i]]++;
    
    for(auto m:mp)
    {
        if(m.second>1)
            return false;
    }

    return true;
}


/*BETTER soln*/

bool solve(string s) {
    if (s.size() > 'z' - 'a' + 1) return false;

    int x = 0;
    for (int i = 0; i < s.size(); i++) {
        if (x & (1 << (s[i] - 'a'))) return false;
        x |= (1 << (s[i] - 'a'));
    }
    return true;
}