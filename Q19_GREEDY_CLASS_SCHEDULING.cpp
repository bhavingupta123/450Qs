//https://binarysearch.com/problems/Class-Scheduling

int cmp(vector<int> a , vector<int> b){

    return a[1]<b[1];
}

int solve(vector<vector<int>>& times) {
    
    int i,j,k;

    if (times.size() <= 1) {
        return times.size();
    }

    sort(times.begin(),times.end(),cmp);

    int n=times.size(),end=times[0][1],cnt=1;

    for(i=1;i<n;++i){

        if(times[i][0]>end){
            ++cnt;
            end = times[i][1];
        }
    }

    return cnt;
}