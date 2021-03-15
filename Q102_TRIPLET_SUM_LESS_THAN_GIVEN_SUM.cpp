class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	   long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,l,r;
        
       sort(arr,arr+n);
       
       for(i=0;i<n-2;++i)
       {
           j = i+1;
           l = n-1;
    
           while(j<l)
           {
               ans3 = arr[i] + arr[j] + arr[l];
    
               if(ans3<sum)
                {
                    cnt+=(l-j);
                    j++;
                }
    
               else
                l--;
    
           }
       }

   return cnt;

    
	}
		 

};