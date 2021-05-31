//https://binarysearch.com/problems/Anagram-Checks/

bool solve(string s, string t) {
    
    if(s.length()!=t.length())
        return false;
    
    unordered_map<char,int>mp;
    int i,j,k;

    for(i=0;i<s.length();++i)
        mp[s[i]]++;
    
    for(i=0;i<t.length();++i)
        mp[t[i]]++;

    for(auto m:mp)
    {
        if(m.second%2!=0)
            return false;
    }

    return true;
}

/*OR*/

bool solve(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1 ? true : false;
}