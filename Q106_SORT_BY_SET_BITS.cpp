class Solution{
    public:
    
    
    int dec2bin(int num)
    {
        int cnt=0;

        while(num>0)
        {
            if(num%2!=0)
                ++cnt;
            num/=2;
        }
        return cnt;
    }



    void sortBySetBitCount(int arr[], int n)
    {
        int i,j,k,l,ans,cnt;
        multimap<int ,int> mp;

        for(i=0;i<n;++i)
            {
                mp.insert({(-1) * dec2bin(arr[i]), arr[i]});
            }

        //sort(mp.begin(),mp.end());

        j=0;

        for (auto& it : mp)
        {
            arr[j] = it.second ;
            j++;
        }

    }
};