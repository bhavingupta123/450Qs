int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int , pair<int,int>>> v;
        int i,j,k,cnt=1,finish;
        
        for(i=0;i<n;++i)
        {
            v.push_back({end[i],{start[i],i}});
        }
        
        sort(v.begin(),v.end());
        i=1;
        finish = v[0].first;
        
        while(i<n)
        {
            if(v[i].second.first > finish)
            {
                finish = v[i].first;
                cnt++;
            }
            i++;
        }
        
        return cnt;
        
    }