vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k)
{
    long long i=0,j=0;
    vector<long long> v;
    deque<long long> q;
    
    while(j<n)
    {
        if(arr[j]<0)
            q.push_back(arr[j]);
        
        if(j-i+1<k)
            j++;
            
        else if(j-i+1 == k)
        {
            if(!q.empty())
                v.push_back(q.front());
            else
                v.push_back(0);
            
            if(arr[i]<0)
            {
                q.pop_front();
            }
             i++;j++;
        }
    }
    
    return v;
}