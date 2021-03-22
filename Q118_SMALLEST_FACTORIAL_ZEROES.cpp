class Solution
{
    public:
    
        int check(int mid  , int n)
        {
            int temp = mid,f=5,c=0;
            
            while(f<=temp)
            {
                c +=(temp/f);
                f = f*5;
            }
            
            return (c>=n);
            
        }
    
        int findNum(int n)
        {
            int i,j,k,mini,l,h,mid;
            
            mini = n*5;
            
            l=0;
            h = mini;
            
            while(l<h)
            {
                mid = (l+h)/2;
                
                if(check(mid,n))
                    h = mid;
                else
                    l = mid +1;
            }
            
                return l;
            }
        };