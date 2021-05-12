class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool mycompare(Job a, Job b)
    {
        return a.profit > b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,mycompare);
        
        vector<int> v;
        unordered_map<int,int> mp;
        int profit=0,cnt=0,i,j;
        
        for(i=0;i<n;++i)
        {
            for(j=min(n, arr[i].dead)-1 ; j>=0;--j)
            {
                if(mp[j]==0)
                {
                    mp[j]++;
                    cnt++;
                    profit = profit +  arr[i].profit;
                    break;
                }
            }
        }
        v.push_back(cnt);
        v.push_back(profit);
        
        return v;
    } 
};