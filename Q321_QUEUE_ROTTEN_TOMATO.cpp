class Solution 
{
    public:
    
    bool safe(vector<vector<int>> &mat, int i, int j)
    {
        return (i >= 0 && i < mat.size() && j >= 0 && j < mat[i].size() && mat[i][j] == 1);
    }
    //Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>>& grid) {

        int i,j,k,tt=-1;
        queue<pair<int,int>> q;
       
        for(i=0;i<grid.size();++i)
        {
            for(j=0;j<grid[i].size();++j)
            {
               if(grid[i][j]==2)
               {
                    q.push({i,j});
                    grid[i][j]=5;
               }
            }
        }

        while(!q.empty())
        {
            int cnt = q.size();

            for(k=0; k<cnt; ++k)
            {
                i = q.front().first;
                j = q.front().second;

                if(safe(grid , i+1 , j))
                {
                    q.push({i+1,j});
                    grid[i+1][j]=5;
                }

                if(safe(grid , i , j-1))
                {
                    q.push({i,j-1});
                    grid[i][j-1]=5;
                }

                if(safe(grid , i-1 , j))
                {
                    q.push({i-1,j});
                    grid[i-1][j]=5;
                }

                if(safe(grid , i , j+1))
                {
                    q.push({i,j+1});
                    grid[i][j+1]=5;
                }

                q.pop();
            }
            tt++;
        }

        for(i=0;i<grid.size();++i)
            for(j=0;j<grid[i].size();++j)
            {
                if(grid[i][j] == 1)
                    return -1;
            }
        return tt;
    }
};