//https://practice.geeksforgeeks.org/problems/3b76f77c1b2107f809b1875aa9fe929ce320be97/1/?category[]=Greedy&category[]=Greedy&difficulty[]=1&difficulty[]=2&page=1&query=category[]Greedydifficulty[]1difficulty[]2page1category[]Greedy


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	
    	long long l=0,h=n-1,cnt=0;
    	sort(a,a+n);
            	
    	while(l<h){
    	    
    	    if((a[l]+a[h])>0){
    	        cnt+=(h-l);
    	        h--;
    	    }
    	    else
    	        l++;
    	}
    	
    	return cnt;
    }   
};

/**/

class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	
    	long long  i,j,k,cnt=0;
    	sort(a,a+n);
    	j=0;
            	
    	for(i=n-1;i>=0,i!=j;){
    	        
    	    if((a[j]+a[i])>0)
    	    {
    	        cnt+=(i-j);
    	        --i;
    	    }
    	    else
    	        j++;
    	}
    	
    	return cnt;
    }   
};