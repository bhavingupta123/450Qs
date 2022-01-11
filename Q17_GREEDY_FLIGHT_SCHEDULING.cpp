//https://binarysearch.com/problems/Flight-Scheduling

bool com(vector<int> a, vector<int> b) {

    int x = abs(a[0] - a[1]);
    int y = abs(b[0] - b[1]);

    if (x > y) 
        return true;
    
    return false;
}


int solve(vector<vector<int>>& costs) {
    
    int i,j,k,res=0,cnt_a=0,cnt_b=0,n = costs.size();
    sort(costs.begin(), costs.end(), com);

    i=0;

    while(i<n){

        if((costs[i][0]<= costs[i][1] && cnt_a<(n/2)) || cnt_b==n/2){
            res+=costs[i][0];
            ++i;
            cnt_a++;
        }
        else{
            res+=costs[i][1];
            ++i;
            cnt_b++;
        }
    }

    return res;
    
}