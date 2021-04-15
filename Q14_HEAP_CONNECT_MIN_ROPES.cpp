class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) 
    {
        long long i,j,k,sum=0,total=0;
        
        priority_queue <long long , vector<long long >, greater<long long > > pq;
        
        
        for(i=0;i<n;++i)
            pq.push(arr[i]);
        
        while(!pq.empty())
        {
            sum = pq.top();
            pq.pop();

            if(!pq.empty())
            {
                sum+=pq.top();
                pq.pop();
                pq.push(sum);
            }

            total+=sum;
        }
        
        return (total - sum);
        
    }
};