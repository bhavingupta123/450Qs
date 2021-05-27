class Solution{
public:
    int minValue(string s, int k){
        
        int hash[26]={0},i,j,ans=0;
        priority_queue<int> pq;
        
        for(i=0;i<s.length();++i)
        {
            hash[s[i]-'a']++;
        }
        
        for(i=0;i<26;++i)
        {
            if(hash[i]!=0)
            {
                pq.push(hash[i]);
            }
        }
        
        while(!pq.empty() && k--)
        {
            int f = pq.top();
            pq.pop();
            pq.push(f-1);
        }
        
        while(!pq.empty())
        {
            int f = pq.top();
            pq.pop();
            ans+=f*f;
        }
        
        return ans;
        
    }
};