//Detect Voter Fraud

//EASY
/*
Given a two dimensional list of integers votes, 
where each list has two elements [candidate_id, voter_id], 
report whether any voter has voted more than once.
*/

bool solve(vector<vector<int>>& votes) {
    
    int i,j,k;
    map<int,int> mp;

    for(i=0;i<votes.size();++i)
    {
        if(mp[votes[i][1]])
        {
            return true;
        }
        else 
        {
            mp[votes[i][1]] = -1;
        }
        
    }

    return false;
}