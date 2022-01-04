//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        
        int i,j,k;
        
        for(i=0;i<n;++i)
        {
            v.push_back({end[i],start[i]});
        }
        
        sort(v.begin(),v.end());
        
        int fin = v[0].first , cnt=1;
        
        for(i=1;i<n;++i){
            
            if(v[i].second > fin){
                
                ++cnt;
                fin = v[i].first;
            }
        }
        
        return cnt;
    }
};