class Solution{
    public:

    int kthSmallest(int arr[], int l, int n, int k)
    {
        priority_queue <int> pq;
        int i,j;
        for(i=0;i<=n;++i)
        {
            pq.push(arr[i]);
            
            if(pq.size()>k)
                pq.pop();
        }
        
        return pq.top();
    }
};