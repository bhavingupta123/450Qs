//Word Formation
//https://binarysearch.com/problems/Word-Formation
//EASY

int solve(vector<string>& words, string letter) {
    
    unordered_map<char,int> mp,mp2;
    int i,j,k,ans=0,ans2=0;

    for(i=0;i<letter.size();++i)
        mp[letter[i]]++;
    
    mp2=mp;
    for(i=0;i<words.size();++i)
    {   
        mp=mp2;
        ans=0;
        for(j=0;j<words[i].size();++j)
        {
            if(!mp[words[i][j]])
            {
                ans=0;
                break;
            }
            else
            {
                mp[words[i][j]]--;
                ans++;
            }
        }

        if(ans>ans2)
            ans2=ans;
    }

    return ans2;

}