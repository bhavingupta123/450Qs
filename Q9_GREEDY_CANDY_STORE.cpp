//https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1/?category[]=Greedy&category[]=Greedy&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]0difficulty[]1difficulty[]2page2category[]Greedy#

class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int K)
    {
        int i=0,j=n-1,k;
        sort(candies,candies+n);
        
        int minC=0 , maxC=0 ,cnt=1,temp=0;
        
        while((K+1)*cnt<n)
            ++cnt;
        
        while(temp<cnt){
            
            minC+=candies[i++];
            maxC+=candies[j--];
            temp++;
        }
        
        vector<int> ans;
        ans.push_back(minC);
        ans.push_back(maxC);
        
        return ans;
    }
};