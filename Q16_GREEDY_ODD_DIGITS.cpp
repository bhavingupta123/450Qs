//https://binarysearch.com/problems/Odd-Number-of-Digits/

int solve(vector<int>& nums) {
    
    int i,j,k,cnt=0;

    for(i=0;i<nums.size();++i){

        string str = to_string(nums[i]);
        //cout<<str.length()<<" ";
        if(str.length()%2!=0)
            ++cnt;
    }

    return cnt;
}

/*OR*/

int solve(vector<int>& nums) {
    
    int i,j,k,cnt=0;

    for(i=0;i<nums.size();++i){

        cnt+=int(log10(nums[i])+1)&1;
    }

    return cnt;
}

