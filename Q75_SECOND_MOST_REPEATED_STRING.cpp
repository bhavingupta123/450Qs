class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string, int> ma;
        int i,j,k;
        
        for(i=0;i<n;++i)
        {
            ma[arr[i]]++;
        }

        int first_max = INT_MIN, sec_max = INT_MIN;
        
        for (auto it = ma.begin(); it != ma.end(); it++)
            {
            if (it->second > first_max) {
                sec_max = first_max;
                first_max = it->second;
            }
    
            else if (it->second > sec_max &&
                     it->second != first_max)
                sec_max = it->second;
        }
    
    
        for (auto it = ma.begin(); it != ma.end(); it++)
            if (it->second == sec_max)
                return it->first;
            
        
    }
};