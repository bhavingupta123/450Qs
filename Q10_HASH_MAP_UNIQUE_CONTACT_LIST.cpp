//https://binarysearch.com/problems/Unique-People-in-Contact-List

int solve(vector<vector<string>>& contacts) {
    
    map<string,int> mp;
    int i,j,k,cnt=0,flag=0;

    for(i=0;i<contacts.size();++i)
    {
        flag=0;
        for(j=0;j < contacts[i].size(); j++)
        {
            if(mp[contacts[i][j]]>0)
                flag=1;
            else
               mp[contacts[i][j]]++;     
        }

        if(!flag)
            ++cnt;
    }

    return cnt;
}