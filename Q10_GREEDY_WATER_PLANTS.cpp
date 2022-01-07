//https://practice.geeksforgeeks.org/problems/410d51d667ab93f2219b15126f001f32e8bb029e/1/?category[]=Greedy&category[]=Greedy&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]1difficulty[]2page2category[]Greedy


class Solution{
    public:
    int min_sprinklers(int arr[], int n)
    {
        int i,j,k,cnt=0;
        
        vector<pair<int,int>> v;
        
        for(i=0;i<n;++i){
            
            if(arr[i]>=-1){
                v.push_back({i-arr[i],i+arr[i]});
            }
        }
        
        sort(v.begin(), v.end());
        
        int maxright=0,currmax=0;
        i=0;
        
        while(maxright<n){
                
            if (i == v.size() || v[i].first > maxright) {
                return -1;
            }
            
            currmax = v[i].second;
            
            while(i+1 < v.size() && v[i+1].first<=maxright){
                ++i;
                currmax = max(currmax,v[i].second);
            }
            
            if(currmax<maxright)
                return -1;
            
            cnt++;
            ++i;
            maxright = currmax+1;
        }
        
        return cnt;
        
    }
};