class Solution {
private:
public:
	int minSwaps(vector<int>&arr){
 
    int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,sum=0,l,r;

    n=arr.size();
    
    pair<int, int> arrPos[n];
    
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

 
    sort(arrPos, arrPos + n);

    vector<bool> vis(n, false);

  
    ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] || arrPos[i].second == i)
            continue;

       
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;

            
            j = arrPos[j].second;
            cycle_size++;
        }

     
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }

    return ans;
	}
};