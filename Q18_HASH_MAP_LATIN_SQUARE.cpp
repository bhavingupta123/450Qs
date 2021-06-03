//Latin Square

//EASY

/*Given an n by n matrix of letters matrix, 
return whether there are exactly n different letters that appear in the 
matrix and each letter appears exactly once in each row and exactly once in each column.
*/

bool solve(vector<vector<string>>& matrix) {
    
    int i,j,k;
    map<char,int> mp;

    for(i=0;i<matrix.size();++i)
    {
        for(j=0;j<matrix[i].size();++j)
        {
            if(mp[matrix[i][j]])
                return false;
            else
                mp[matrix[i][j]]=1;
        }

        mp.clear();
    }

    for(i=0;i<matrix.size();++i)
    {
        for(j=0;j<matrix[i].size();++j)
        {
            if(mp[matrix[j][i]])
                return false;
            else
                mp[matrix[j][i]]=1;
        }

        mp.clear();
    }

    return true;
}