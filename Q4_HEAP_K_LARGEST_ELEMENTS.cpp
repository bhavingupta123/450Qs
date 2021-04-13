class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int> ans;
	    int i,j;
	    
	    priority_queue <int> pq;
        
        for(i=0;i<n;++i)
        {
            pq.push(arr[i]);
        }
        
        for(i=0;i<k;++i)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
	}

};