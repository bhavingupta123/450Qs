//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy


class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	int i,j,k,plat_needed=1,res=0;
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	i=1;j=0;
    	
    	while(i<n && j<n){
    	    
    	    if(arr[i]<=dep[j])
    	    {
    	        plat_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        
    	        plat_needed--;
    	        j++;
    	    }
    	    
    	    res = max(res,plat_needed);
    	}
    	
    	return res;
    }
};