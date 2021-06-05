//https://binarysearch.com/problems/Eat-Bananas-in-K-Hours

//MEDIUM

int can(vector<int> &piles , int k ,int r)
{
    int curr=0;

    for(int i=0;i<piles.size();++i)
    {
        if(piles[i]<=r)
        {
            curr++;
        }
        else
        {
            curr+=((piles[i] + r -1)/r);
        }
        if(curr>k)
            return false;
    }

    return curr<=k;
}

int solve(vector<int>& piles, int k) {
    
    int low=1,high=*max_element(piles.begin(),piles.end());
    int ans = INT_MAX;
    while(low<=high)
    {
        int mid = (low + high)/2;

        if(can(piles,k,mid))
        {
             ans = min(ans,mid);
             high = mid -1;
        }
        else
        {
            low  = mid + 1;
        }
    }

    return ans;
}