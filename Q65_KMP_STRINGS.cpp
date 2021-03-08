class Solution{
public:		

		
	int lps(string s)
	{
	    vector<int> A(s.size(), 0);
        int j = 0, i = 1;
    
        while (i < s.size())
        {
            if (s[i] == s[j])
            {
                A[i] = j + 1;
                j++;
                i++;
            }
            else
            {
                if (j == 0)
                    i++;
                else
                    j = A[j - 1];
            }
        }
    
        return A.back();
	}
};