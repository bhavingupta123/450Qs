class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int i, j , k , l ,n ,a , ans=INT_MAX;
        
        if(strs.size() == 0)
            return "";
        
        string c = strs[0];
        
        for(i=1; i<strs.size() ; ++i)
        {
            j=0;k=0;a=0;
            
            while(j<c.size() && k<strs[i].size())
            {
                if(c[j] == strs[i][k])
                    a++;
                else
                    break;
                
                j++;
                k++;
            }
            
            ans = min(ans,a);
            
        }
        
        return c.substr( 0 , ans);
        
    }
};