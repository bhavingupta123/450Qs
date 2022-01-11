//https://www.geeksforgeeks.org/survival/

class Solution{
public:
    int minimumDays(int S, int N, int M){
        int i,j,k,cnt=0;
        
        if(((N*6) < (M*7) && S>6) || N<M)
            return -1;
        
        cnt = (S*M)/N;
        
        if(((S*M)%N)!=0)
            ++cnt;
        
        return cnt;
    }
};