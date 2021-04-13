class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        int i,j;
        priority_queue <int, vector<int>, greater<int> > pq;
        for(i=0;i<k;++i)
        {
            for(j=0;j<k;++j)
            {
                pq.push(arr[i][j]);
            }
        }
        
        vector<int> ans;
        
        while (!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};