//Minimum String
//EASY
/*You are given two strings s and t of equal length only consisting of lowercase letters. 
Assuming that you can first rearrange s into any order, 
return the minimum number of changes needed to turn s into t.
*/

int solve(string s, string t) {
    
    int i,j,k,ans=0;
    map<char,int> mp1,mp2;

    for(i=0;i<s.length();++i)
    {
        mp1[s[i]]++;
        mp2[t[i]]++;
    }

    for(auto m:mp1)
    {
        if(mp1[m.first]>=mp2[m.first] )
        {
          mp1[m.first] = mp1[m.first] - mp2[m.first]; 
        }
        else if(mp2[m.first]>1)
        {
            mp1[m.first]=0;
        }
    }

    for(auto m:mp1)
    {
        if(mp1[m.first]>=1)
        {
          ans+=mp1[m.first];
        }
    }

    return ans;

}