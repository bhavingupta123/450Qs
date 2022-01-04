//

int majorityElement(int a[], int size)
    {
        
        int i,j,k,ele=0,cnt=0,max_cnt=0;
        
        
        for(i=0;i<size;++i){
            
            if(cnt==0)
                ele = a[i];
            if(a[i]==ele)
                ++cnt;
            else
                cnt--;
        }
    
        for(i=0;i<size;++i){
            
            if(a[i]==ele)
                ++max_cnt;
        }
        
        
        if(max_cnt  > (size/2))
            return ele;
        
        return -1;
    }
	
/* OR */

 int majorityElement(int a[], int size)
    {
        
        map<int,int> mp;
        int i,j,k;
        
        for(i=0;i<size;++i){
            mp[a[i]]++;
        }
        
        for(auto m:mp){
            
            if(m.second > (size/2))
                return m.first;
        }
        
        return -1;
        
    }