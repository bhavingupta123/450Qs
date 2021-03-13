class Solution{
public:
    int *findTwoElement(int *arr, int n) 
    {
        int i,j,k;
        int *res = new int(2);
        for(i=0;i<n;++i)
        {
            if(arr[abs(arr[i])-1]>0)
                arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
            else
                res[0] = abs(arr[i]);
        }
        
        for(i=0;i<n;++i)
        {
            if(arr[i]>0)
                res[1]=(i+1);
        }
        
        return res;
        
    }
};