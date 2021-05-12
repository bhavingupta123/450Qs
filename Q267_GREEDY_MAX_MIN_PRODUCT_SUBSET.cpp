//https://practice.geeksforgeeks.org/problems/max-and-min-products3347/1#

class Solution{
public:
    
    long long int findmin(long long int arr[], long long int n)
    {
        long long int no_zero =0, no_neg=0,min_pos=INT_MIN,max_neg=INT_MIN,prod=1,i;

        for(i=0;i<n;++i)
        {
            if(arr[i]==0)
            {
                no_zero++;
                continue;
            }
    
            if(arr[i]<0)
            {
                no_neg++;
                max_neg = max(max_neg,arr[i]);
            }
    
            prod = prod*arr[i];
        }
    
        if(no_zero==n)
        {
            return 0;
        }
    
        else if(no_neg%2!=0)
        {
            if(no_neg==1 && no_zero>0 && no_neg+no_zero==n)
            {
                return 0;
            }
            prod = prod/max_neg;
        }
    
        return prod;
    }
    
    
    long long findmax(long long int arr[], long long int n)
    {
        long long int no_zero =0, no_neg=0,min_pos=INT_MAX,max_neg=INT_MIN,prod=1,i;
    
        for(i=0;i<n;++i)
        {
            if(arr[i]==0)
            {
                no_zero++;
                continue;
            }
    
            if(arr[i]<0)
            {
                no_neg++;
                max_neg = max(max_neg,arr[i]);
            }
    
            if(arr[i]>0)
            {
                min_pos = min(min_pos,arr[i]);
            }
            prod = prod*arr[i];
        }
    
        if(no_zero==n || (no_neg==0 && no_zero>0))
        {
            return 0;
        }
    
        else if(no_neg==0)
        {
            return min_pos;
        }
    
        else if(no_neg%2==0 && no_neg!=0)
        {
            return prod/max_neg;
        }
    
        return prod;
    }
    
    vector<long long int> getMaxandMinProduct(long long int arr[], long long int n)
    {
        vector<long long int> v;
        
        if(n==1)
        {
            v.push_back(arr[0]);
            v.push_back(arr[0]);
            
            return v;
        }
        v.push_back(findmax(arr,n));
        v.push_back(findmin(arr,n));
        return v;
    }  
};