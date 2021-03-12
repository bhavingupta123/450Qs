class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    
	    vector<int> v;
	    
	    int i,j,k;
	    
	    for(i=0;i<n;++i)
	        if(arr[i]==i+1)
	            v.push_back(arr[i]);
	   
	   return v;
	}
};