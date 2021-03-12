int findsecond(int arr[] , int n ,int x)
{
    int start=0,mid,end=n-1,res=-1;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(arr[mid]==x)
        {
            res=mid;
            start = mid+1;
        }
        
        else if(arr[mid]>x)
            end=mid-1;
        else
            start=mid+1;
            
    }
    
    return res;
    
}

int findfirst(int arr[] , int n ,int x)
{
    int start=0,mid,end=n-1,res=-1;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(arr[mid]==x)
        {
            res=mid;
            end = mid-1;
        }
        
        else if(arr[mid]>x)
            end=mid-1;
        else
            start=mid+1;
            
    }
    
    return res;
    
}

vector<int> find(int arr[], int n , int x )
{
    int f,s;
    
    vector<int> v;
    
    f=findfirst(arr,n,x);
    s=findsecond(arr,n,x);
    
    v.push_back(f);
    v.push_back(s);
    
    return v;
    
}