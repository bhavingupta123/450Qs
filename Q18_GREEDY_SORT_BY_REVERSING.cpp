//https://binarysearch.com/problems/Sort-List-by-Reversing-Once

bool solve(vector<int>& nums) {
    
    int i,j,k,start=-1,end=-1,n=nums.size();

    vector<int> temp = nums;

    sort(temp.begin(),temp.end());

    for(i=0;i<n;++i){

        if(temp[i]!=nums[i]){
            if(start==-1)
                start=i;
            end=i;
        }
    }

    for(i=start+1;i<=end;++i){
        if (nums[i] > nums[i - 1]) 
            return false;
    }

    return 1;
}