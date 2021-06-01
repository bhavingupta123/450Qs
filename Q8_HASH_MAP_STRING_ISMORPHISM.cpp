//https://binarysearch.com/problems/String-Isomorphism

bool solve(string s, string t) {
    
    if(s.length()!=t.length())
        return false;
    
    unordered_map<char,char> mp1,mp2;
    int i,j,k;

    for(i=0;i<s.length();++i)
    {
        if(mp1.find(s[i])!=mp1.end() && mp1[s[i]]!=t[i])
            return false;
        if(mp2.find(t[i])!=mp2.end() && mp2[t[i]]!=s[i])
            return false;

        mp1[s[i]]=t[i];
        mp2[t[i]]=s[i];

        cout<<s[i]<<" "<<mp1[s[i]]<<" ";
        cout<<t[i]<<" "<<mp2[t[i]]<<"\n";
    }

    return true;
}