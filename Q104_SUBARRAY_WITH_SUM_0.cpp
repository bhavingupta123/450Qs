ll findSubarray(vector<ll> arr, int n ) {
    ll sum=0,i;
    unordered_map<int , int>mp;
    int temp=0;
    mp[0]=1;
    
    for(i=0;i<n;++i)
    {
        temp+=arr[i];
        
        if(mp.find(temp)!=mp.end())
        {
            sum+=mp[temp];
            mp[temp]++;
        }
        else
        {
            mp[temp]++;
        }
    }
    
    return sum;
}