//https://binarysearch.com/problems/Maximum-Absolute-Value-of-Sublist


int solve(vector<int>& nums) {
    
    int i,j,k,maxs=0,mins=0,maxsofar=0;

    for(int ele:nums){

        maxs = max(maxs+ele,ele);
        mins = min(mins+ele,ele);
        
        maxsofar=max({maxsofar,maxs,-mins});
    }

    return maxsofar;
}