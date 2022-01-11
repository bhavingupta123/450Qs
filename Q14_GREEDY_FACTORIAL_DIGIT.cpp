//https://practice.geeksforgeeks.org/problems/fact-digit-sum4125/1/?category[]=Greedy&category[]=Greedy&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]0difficulty[]1difficulty[]2page2category[]Greedy#

class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	    // Code here
	    int arr[10] = {1,1,2,6,24,120,720,5040,40320,362880};
	    int i=9,j,k;
	    
	    vector<int> res;
	    
	    while(N>0){
	        
	        while(N>=arr[i]){
	            res.push_back(i);
	            N = N - arr[i];
	        }
	        --i;
	    }
	    
	    reverse(res.begin(),res.end());
	    
	    return res;
	    
	}
};