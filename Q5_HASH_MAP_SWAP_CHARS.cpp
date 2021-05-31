//https://binarysearch.com/problems/Swap-Characters-to-Equalize-Strings/editorials

bool solve(string s, string t) {
    
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